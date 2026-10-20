import random
from pathlib import Path

from gshare_ref import GShareRef

K = 4
NUM_TESTS = 1000
SEED = 20261010

random.seed(SEED)

ref = GShareRef(k=K)

out_path = Path(__file__).parent / "random_vectors.txt"

hex_width = (K + 3) // 4

with out_path.open("w") as f:
    for _ in range(NUM_TESTS):
        # Halfword-aligned RISC-V PC.
        pc = random.randrange(0, 0x1000, 2)
        actual_taken = random.randint(0, 1)

        index = ref.index(pc)
        state_before = ref.pht[index]
        predicted_taken = (state_before >> 1) & 1
        expected_wrong = int(predicted_taken != actual_taken)

        ref.update_counter(index, actual_taken)
        state_after = ref.pht[index]

        ref.committed_history = ref.shift_history(
            ref.committed_history,
            actual_taken,
        )

        # Tests are non-overlapping, so after resolution speculative
        # history should equal committed history.
        ref.speculative_history = ref.committed_history

        f.write(
            f"{pc:08x} "
            f"{actual_taken:d} "
            f"{state_before:x} "
            f"{expected_wrong:d} "
            f"{state_after:x} "
            f"{index:0{hex_width}x} "
            f"{ref.committed_history:0{hex_width}x}\n"
        )

print(f"Generated {NUM_TESTS} vectors in {out_path}")
print(f"Seed: {SEED}")