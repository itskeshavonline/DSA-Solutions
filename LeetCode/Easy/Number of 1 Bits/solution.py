class Solution:
    def hammingWeight(self, n: int) -> int:
        count = 0
        while n > 0:
            # Clears the lowest set bit
            n = n & (n - 1)
            count += 1
        return count

# other Approach
# class Solution {
# public:
#     int hammingWeight(int n) {
#         int count = 0;
#         while(n != 0) {
#             if((n&1) == 1) {
#                 count++;
#             }

#             n = n >> 1;
#         }

#         return count;
#     }
# };
