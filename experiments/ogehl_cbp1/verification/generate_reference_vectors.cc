#include <cstdint>
#include <cstdio>
#include "predictor.h"

int main() {
    PREDICTOR predictor;
    branch_record_c br;

    uint32_t rng = 20261019u;

    constexpr int NUM_EVENTS = 20000;

    for (int i = 0; i < NUM_EVENTS; ++i) {
        // Deterministic xorshift32 generator
        rng ^= rng << 13;
        rng ^= rng >> 17;
        rng ^= rng << 5;

        // Include both even and odd PCs to exercise
        // the original CBP path-history and alias-tag rules.
        uint32_t pc = 0x1000u
                    + ((rng & 1023u) << 1)
                    + ((rng >> 30) & 1u);

        bool conditional = (i % 13 != 0);
        bool taken = ((rng >> 17) ^ (rng >> 12) ^ (i >> 3)) & 1u;

        br.instruction_addr = pc;
        br.is_conditional = conditional;

        bool prediction = predictor.get_prediction(&br, nullptr);

        // PC, conditional, actual outcome, expected prediction
        std::printf("%08x %d %d %d\n",
                    pc,
                    int(conditional),
                    int(taken),
                    int(prediction));

        predictor.update_predictor(&br, nullptr, taken);
    }

    return 0;
}