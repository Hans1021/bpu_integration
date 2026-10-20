
#include <cstdio>
#include "tread.h"
#include "predictor.h"

int main(int argc, char* argv[])
{
    if (argc != 2) {
        std::fprintf(stderr, "Usage: %s <trace_base>\n", argv[0]);
        return 1;
    }

    PREDICTOR predictor;
    cbp_trace_reader_c reader(argv[1]);
    branch_record_c br;

    while (reader.get_branch_record(&br)) {
        bool predicted = predictor.get_prediction(&br, reader.osptr);
        bool actual = reader.predict_branch(predicted);

        predictor.update_predictor(&br, reader.osptr, actual);
    }

    predictor.print_coverage();
    return 0;
}
