import bisect

class Solution:
    def gcdValues(self, nums: list[int], queries: list[int]) -> list[int]:
        mx = max(nums)
        # 1. Frequency count
        count = [0] * (mx + 1)
        for x in nums:
            count[x] += 1
            
        # 2. Count pairs divisible by i
        # gcdCounts[i] will store pairs with GCD exactly i
        gcdCounts = [0] * (mx + 1)
        for i in range(1, mx + 1):
            multiples = 0
            for j in range(i, mx + 1, i):
                multiples += count[j]
            gcdCounts[i] = (multiples * (multiples - 1)) // 2
            
        # 3. Inclusion-Exclusion (backwards)
        for i in range(mx, 0, -1):
            for j in range(2 * i, mx + 1, i):
                gcdCounts[i] -= gcdCounts[j]
        
        # 4. Prefix sums to represent sorted array
        presum = [0] * (mx + 1)
        for i in range(1, mx + 1):
            presum[i] = presum[i - 1] + gcdCounts[i]
            
        # 5. Answer queries via Binary Search
        ans = []
        for q in queries:
            # the first index where presum[idx] > q
            idx = bisect.bisect_right(presum, q)
            ans.append(idx)
            
        return ans