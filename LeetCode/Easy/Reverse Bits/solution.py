class Solution:
    def reverseBits(self, n: int) -> int:
        result = 0
        
        for _ in range(32):
            # 1. Make space in result by shifting it left by 1 bit
            result <<= 1
            
            # 2. Extract the rightmost bit of n and add it to result
            # (n & 1) is a fast way of doing (n % 2)
            result |= (n & 1)
            
            # 3. Shift n to the right to process the next bit
            # (n >>= 1) is a fast way of doing (n //= 2)
            n >>= 1
            
        return result