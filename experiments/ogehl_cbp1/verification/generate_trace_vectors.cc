
#include <cstdint>
#include <cstdio>
#include <cstdlib>

#include "tread.h"
#include "predictor.h"

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::fprintf(stderr,
            "Usage: %s <trace_base> <output_file> <max_events>\n",
            argv[0]);
        return 1;
    }

    const unsigned long long max_events =
        std::strtoull(argv[3], nullptr, 10);

    if (max_events == 0) {
        std::fprintf(stderr, "max_events must be positive\n");
        return 1;
    }

    std::FILE* out = std::fopen(argv[2], "w");
    if (!out) {
        std::perror("fopen");
        return 1;
    }

    PREDICTOR predictor;
    cbp_trace_reader_c reader(argv[1]);
    branch_record_c br;

    unsigned long long count = 0;

    // Follow the original CBP-1 driver sequence exactly.
    while (count < max_events && reader.get_branch_record(&br)) {
        bool predicted = predictor.get_prediction(&br, reader.osptr);
        bool actual = reader.predict_branch(predicted);

        // Nonconditional outcomes are undefined in the CBP API.
        // The predictor treats these events as taken.
        if (!br.is_conditional)
            actual = true;

        std::fprintf(out, "%08x %d %d %d\n",
            br.instruction_addr,
            int(br.is_conditional),
            int(actual),
            int(predicted));

        predictor.update_predictor(&br, reader.osptr, actual);
        ++count;
    }

    std::fclose(out);

    std::fprintf(stderr, "Generated %llu branch events\n", count);
    return 0;
}
