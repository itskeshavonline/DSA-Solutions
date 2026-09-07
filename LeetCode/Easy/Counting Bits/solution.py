class Solution:
    def countBits(self, n: int) -> List[int]:
        ans = [0] * (n + 1)
        
        for i in range(1, n + 1):
            # formula build by observing the patterns
            # ans[i] is the bitcount of (i // 2) + 1 (if i is odd)
            ans[i] = ans[i >> 1] + (i & 1)
            # or
            # ans[i] = ans[i / 2] + (i % 2)
            
        return ans

# Using Offset approach in C++
# class Solution {
# public:
#     vector<int> countBits(int n) {

#         vector<int> ans(n + 1, 0);

#         int offset = 1;

#         for (int i = 1; i <= n; i++) {

#             // When i reaches the next power of 2
#             if (i == offset * 2) {
#                 offset = i;
#             }

#             // offset has one '1'; remaining part is i - offset
#             ans[i] = 1 + ans[i - offset];
#         }

#         return ans;
#     }
# };
