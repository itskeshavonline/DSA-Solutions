class StockSpanner:

    def __init__(self):
        # Stack stores tuples of (price, span)
        self.stack = []

    def next(self, price: int) -> int:
        span = 1
        
        # Accumulate span by popping smaller elements
        while self.stack and self.stack[-1][0] <= price:
            span += self.stack.pop()[1]
            
        # Push the compressed data point
        self.stack.append((price, span))
        return span
        


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)