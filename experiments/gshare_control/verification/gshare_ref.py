class GShareRef:
    def __init__(self, k=10):
        self.k = k
        self.mask = (1 << k) - 1
        self.pht = [0b01] * (1 << k)
        self.committed_history = 0
        self.speculative_history = 0

    def hash_pc(self, pc):
        top = ((pc >> (self.k + 1)) ^ (pc >> 1)) & 1
        low = (pc >> 2) & ((1 << (self.k - 1)) - 1)
        return (top << (self.k - 1)) | low

    def index(self, pc, history=None):
        if history is None:
            history = self.speculative_history
        return (history ^ self.hash_pc(pc)) & self.mask

    def predict_state(self, pc):
        return self.pht[self.index(pc)]

    def predict_taken(self, pc):
        return (self.predict_state(pc) >> 1) & 1

    def update_counter(self, index, taken):
        value = self.pht[index]

        if taken:
            value = min(value + 1, 0b11)
        else:
            value = max(value - 1, 0b00)

        self.pht[index] = value

    def shift_history(self, history, outcome):
        return ((history << 1) | int(bool(outcome))) & self.mask