/***************************************************
    Author: André Seznec, IRISA-INRIA
 
The O-GEHL predictor 
 ***************************************************/


#include <math.h>

#define OGEHL
//one can obtain a simulator of the initial GEHL predictor described in Section 1 of the writeup, i.e., without dynamic history length fitting and dynamic history length fitting by simply commenting the line #define OGEHL

#define NTABLE 8
#ifndef LOGPRED
#define LOGPRED 11
#endif
// Predictor tables features (1<<LOGPRED)=2K entries, except T1 for the CBP (1<< (LOGPRED-1))=1K entries

#define FULLPATH
//allows to use both path information and global branch history information, unconditional control-flow instructions are inserted in the global history. See Section 1.5 of the predictor writeup


#ifndef MAXCOUNTER
#define MAXCOUNTER 7
#define MINCOUNTER -MAXCOUNTER-1
//maximum and minimum of the counters in the prediction tables: 4-bit counters
//except for tables T0 and T1 for the submitted predictor: 5-bit counters
#endif


#ifdef OGEHL
// defines the parameters for the predictor submitted to CBP

#define MAXTHRESUPDATE 31




#define CBP
// this flag set the special configuration for the CBP challenge: 
// 5-bit counters used on tables T0 and T1
// T1 features only 1K entries


#define GLENGTH 200
//GLENGTH is the maximum branch history length, used on table T7 when "long" history length is used
#define L1 3
// L1 is history length for table T1
#define PLENGTH 16
//PLENGTH is the maximum path history length

#define THRES 256
// AC is a  9-bit counter
#define THRESFIT 64
// TC is a  7-bit counter

#define CBP
// special configuration for the CBP challenge: 
// 5-bit counters used on tables T0 and T1
// T1 features only 1K entries.
#define DYNHISTFIT
// enables dynamic history length fitting
#define EXTRAHIST 3
// NTABLE + 3 distinct history lengths

#define DYNTHRESFIT
// enables dynamic update threshold  fitting

#else

//the "classic" GEHL predictor (Section 1 of the predictor writeup)
#define GLENGTH 125
//GLENGTH is the maximum branch history length, used on table T7 
#define L1 3
// L1 is history length for table T1
#define PLENGTH 0
// does  not use path history
#define EXTRAHIST 0
// only NTABLE distinct history lengths
#endif



#define PREDICTOR_H_SEEN

#include <cstddef>
#include <inttypes.h>
#include <vector>
#include "op_state.h"		// defines op_state_c (architectural state) class
#include "tread.h"		// defines branch_record_c class


int LOGSIZE;
long long ghist[(GLENGTH >> 6) + 1];
long long phist;

//INDEX is used to compute the indexes of the tables:
// 1) NENTRY * LOGSIZE bits are regularly picked from the vector of bits constituted with the branch history, the branch program counter and the path history.
// 2) these NENTRY*LOGSIZE bits are reduced to LOGSIZE bits through NENTRY-1 exclusive OR

#define NENTRY 3
//NENTRY is the maximum number of entries on the exclusive-OR gates in the computation of the indexing functions
static int T[NENTRY * LOGPRED + 1];
int
#define ADDWIDTH 8
// the number of bits of the PC address considered for bit picking
INDEX (const long long Add, const long long *histo, const long long phisto,
       const int m, const int funct)
{
  long long inter, Hh, Res;
  int x, i, shift;
  int PT;
  int MinAdd;
  int FUNCT;

  int plength;

/* first  build a NENTRY * LOGSIZE vector of bits from histo,phisto and Add*/
/* we only consider a maximum of 20 bits on Add*/

  if (m < PLENGTH)
    plength = m;
  else
    plength = PLENGTH;
  MinAdd = NENTRY * LOGSIZE - m - plength;
  if (MinAdd > 20)
    MinAdd = 20;


  if (MinAdd >= 8)
    /* we can use all the bits from the phisto, hiso and  at least 8 bits from Add */
    inter =
      ((histo[0] & ((1 << m) - 1)) << (MinAdd + plength)) +
      ((Add & ((1 << MinAdd) - 1)) << plength) +
      ((phisto & ((1 << plength) - 1)));
  else
    {
      /*some  bits must be rejected from a total of m+plength+ADDWIDTH */
      for (x = 0; x < NENTRY * LOGSIZE; x++)
	{
	  T[x] =
	    ((x * (ADDWIDTH + m + plength - 1)) / (NENTRY * LOGSIZE - 1));

	}

      T[NENTRY * LOGSIZE] = ADDWIDTH + m + plength;


      inter = 0;

// pick the bits in the branch history
      Hh = histo[0];
      Hh >>= T[0];
      inter = (Hh & 1);
      PT = 1;


      for (i = 1; T[i] < m; i++)
	{

	  if ((T[i] & 0xffc0) == (T[i - 1] & 0xffc0))
	    {
	      shift = T[i] - T[i - 1];
	    }
	  else
	    {
	      Hh = histo[PT];
	      PT++;
	      shift = T[i] & 63;
	    }
	  inter = (inter << 1);
	  Hh = Hh >> shift;
	  inter ^= (Hh & 1);

	}
/* Pick the address bits*/
      Hh = Add;
      for (; T[i] < m + ADDWIDTH; i++)
	{

	  shift = T[i] - m;
	  inter = (inter << 1);
	  inter ^= ((Hh >> shift) & 1);

	}
/*pick the bits in the path history*/
      Hh = phisto;
      for (; T[i] < m + plength + ADDWIDTH; i++)
	{


	  shift = T[i] - (m + ADDWIDTH);
	  inter = (inter << 1);
	  inter ^= ((Hh >> shift) & 1);

	}



    }


/* inter is now a NENTRY*LOGSIZE vector of bits*/
/* we reduce it to LOGSIZE vector of bits through  using only  NENTRY-entry XOR gates*/
  FUNCT = funct;


  Res = inter & ((1 << LOGSIZE) - 1);
  for (i = 1; i < NENTRY; i++)
    {
      inter = inter >> LOGSIZE;

      Res ^=
	((inter & ((1 << LOGSIZE) - 1)) >> FUNCT) ^
	((inter & ((1 << FUNCT) - 1)) << ((LOGSIZE - FUNCT)));

      FUNCT = (FUNCT + 1) % LOGSIZE;
    }

  return ((int) Res);
}






class PREDICTOR
{
private:int UsedHistLength[NTABLE], HistLength[NTABLE + EXTRAHIST];
  int TC, thresupdate, maxcounter, mincounter, Minitag, AC; 
// TC and AC are defined in the predictor presentation

  char pred[NTABLE][1 << LOGPRED];
// 8 tables with (1<<11)= 2K entries, except table T1 which features only  1 K entries (see the call to the INDEX function for table T1)
// Tables 0 and 1 are 5-bit counters 
// Other tables are 4-bit counters
// Total storage for counters on the 8 tables 10+5 +8 +8+8+8+8+8 = 63Kbits
#ifdef DYNHISTFIT
  char MINITAG[(1 << (LOGPRED - 1))];
// 1K 1-bit tag associated with Table 7
// Total storage amount for the submitted predictor 63K + 1K = 64Kbits
#endif





  void initpredictor ()
  {
    int i, j;
    double initset;
    double glength;
    double tt, Pow;
// First zeroe all tables
    for (j = 0; j < (1 << LOGPRED); j++)
      for (i = 0; i < NTABLE; i++)
	  pred[i][j] = 0;

#ifdef OGEHL
    for (j = 0; j < (1 << (LOGPRED-1)); j++)
      MINITAG[j] = 0;
#endif
 TC=0;
 thresupdate=NTABLE;
 AC=0;


// initialize histories ghist and phist
    for (i = 0; i < (GLENGTH >> 6) + 1; i++)
      ghist[i] = 0;
    phist = 0;

// Computes the history lengths
    glength = (double) (GLENGTH);
    initset = (double) L1;
    tt = glength / initset;
    Pow = pow (tt, ((double) 1) / (double) (NTABLE - 2 + EXTRAHIST));
    HistLength[0] = 0;
    HistLength[1] = L1;
    for (i = 2; i < NTABLE + EXTRAHIST; i++)
      HistLength[i] = (int) ((initset * pow (Pow, (double) (i - 1))) + 0.5);

/*  for (i = 0; i < NTABLE + 3; i++)
printf ("%d ",HistLength[i]);
printf ("\n");*/

// Initialize the history lengths used for each of the predictor tables
    for (i = 0; i < NTABLE; i++)
      UsedHistLength[i] = HistLength[i];

  };


public:

 PREDICTOR (void)
  {
    initpredictor ();
  };
 

  bool get_prediction (const branch_record_c * br, const op_state_c * os) const
  {
    bool prediction = false;
    long long Add;
    int Sum, i;
    int indexg[NTABLE];


    if ( /* conditional branch */ br->is_conditional)
      {



	Sum = NTABLE / 2;

// The counters are not centered

	LOGSIZE = LOGPRED;
	Add = (long long) br->instruction_addr;
	for (i = 0; i < (NTABLE); i++)
	  {
#ifdef CBP
	    if (i == 1)
	      LOGSIZE--;
/* for fitting in the 64Kbits budget for CBP,  table T1 features only 1Kentries*/
#endif

	    indexg[i] =
	      INDEX (Add, ghist, phist, UsedHistLength[i], (i & 3) + 1);
/* last factor (i & 3) + 1  is put  in order to avoid similar combination of bits in the index for adjacent  tables*/
#ifdef CBP
	    if (i == 1)
	      LOGSIZE++;
#endif
	    Sum += pred[i][indexg[i]];
	  }

	prediction = (Sum >= 0);

      }
    return prediction;		// true for taken, false for not taken
  };
  
  void update_predictor (const branch_record_c * br, const op_state_c * os,
			 bool taken)
  {

    bool prediction = false;
    long long Add;
    int Sum;
    int indexg[NTABLE], i;

    /* recompute the prediction and the Sum */
    Add = (long long) br->instruction_addr;


    if ( /* conditional branch */ br->is_conditional)
      {

	Sum = NTABLE / 2;

	LOGSIZE = LOGPRED;
	for (i = 0; i < (NTABLE); i++)
	  {
#ifdef CBP
	    if (i == 1)
	      LOGSIZE--;
/* for fitting in the 64Kbits budget for CBP,  table T1 features only 1Kentries*/

#endif
	    indexg[i] =
	      INDEX (Add, ghist, phist, UsedHistLength[i], (i & 3) + 1);
#ifdef CBP
	    if (i == 1)
	      LOGSIZE++;
#endif
	    Sum += pred[i][indexg[i]];
	  }

	prediction = (Sum >= 0);


#ifdef DYNTHRESFIT
/* update threshold fitting */
	if (prediction != taken)
	  {
	    TC += 1;
	    if (TC > THRESFIT - 1)
	      {
		TC = THRESFIT - 1;
		if (thresupdate < MAXTHRESUPDATE)
		  {
		    TC = 0;
		    thresupdate++;
		  }


	      }
          }
        
	    else if ((Sum < thresupdate) && (Sum >= -thresupdate))
	      {

		TC--;
		if (TC < -THRESFIT)
		  {
		    TC = -THRESFIT;
		    if (thresupdate > 0)
                    {thresupdate--; TC=0;
                    }
                    
		  }


	      }
        
        
// if the number of updates on correct predictions using the high threshold is higher than twice the number of updates on mispredictions, then use the low threshold
#else
	thresupdate = NTABLE;
#endif



	if ((prediction !=
	     taken) || ((Sum < thresupdate) && (Sum >= -thresupdate)))
	  {
/*update the counters*/

	    for (i = 0; i < NTABLE; i++)
	      {
		if (taken)
		  {

#ifdef CBP
//T0 and T1 implements 5-bit counters
		    if (i <= 1)
		      maxcounter = 2 * MAXCOUNTER + 1;
		    else
#endif

		      maxcounter = MAXCOUNTER;

		    if (pred[i][indexg[i]] < maxcounter)
		      pred[i][indexg[i]]++;
		  }
		else
		  {

#ifdef CBP
//T0 and T1 implements 5-bit counters
		    if (i <= 1)
		      mincounter = 2 * (MINCOUNTER);
		    else
#endif

		      mincounter = MINCOUNTER;

		    if (pred[i][indexg[i]] > mincounter)
		      pred[i][indexg[i]]--;
		  }
	      }





#ifdef DYNHISTFIT
/*dynamic history length fitting*/
// 1 tag bit is associated with each even entry in table T7
	    if ((indexg[NTABLE - 1] & 1) == 0)
	      {

		if ((prediction != taken))
		  {

		    Minitag = MINITAG[indexg[NTABLE - 1] >> 1];

		    if (Minitag != ((int) (Add & 1)))
		      {
			AC -= 4;
			if (AC < -THRES)
			  {
//when AC becomes saturated negative, high level of aliasing is considered, then "short" history lengthes are used
			    AC = -THRES;
			    UsedHistLength[6] = HistLength[6];
			    UsedHistLength[4] = HistLength[4];
			    UsedHistLength[2] = HistLength[2];
			  }


		      }
		    else
		      {
			AC++;
			if (AC > THRES - 1)
			  {
//when AC becomes  saturated positive, low level of aliasing is considered, then "long" history lengthes are used
			    AC = THRES - 1;
			    UsedHistLength[6] = HistLength[NTABLE + 2];
			    UsedHistLength[4] = HistLength[NTABLE + 1];
			    UsedHistLength[2] = HistLength[NTABLE];
			  }

		      }


		  }
		MINITAG[indexg[NTABLE - 1] >> 1] = (char) (Add & 1);
	      }

#endif




	  }

      }
/* update the branch history and the path history*/
#ifdef FULLPATH
    phist = (phist << 1) + (Add & 1);
#endif
#ifndef FULLPATH
    if (br->is_conditional)
#endif

      {
	for (i = (GLENGTH >> 6); i > 0; i--)
	  ghist[i] = (ghist[i] << 1) + (ghist[i - 1] < 0);
	ghist[0] = ghist[0] << 1;

	if (((br->is_conditional) && (taken)) | (!br->is_conditional))
	  ghist[0]++;

      }
  }

  ;
}

;
