class Solution:
    def countBits(self, n: int) -> List[int]:
        ans = [0] * (n + 1)
        
        for i in range(1, n + 1):
            # formula build by observing the patterns
            # ans[i] is the bitcount of (i // 2) + 1 (if i is odd)
            ans[i] = ans[i >> 1] + (i & 1)
            
        return ans