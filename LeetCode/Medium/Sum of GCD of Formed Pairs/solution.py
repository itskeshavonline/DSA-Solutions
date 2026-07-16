import math
from typing import List

class Solution:
    def gcdSum(self, nums: List[int]) -> int:
        prefixGCD = []
        runningMax = -1
        
        # Phase 1: Construct prefix GCDs
        for num in nums:
            runningMax = max(runningMax, num)
            prefixGCD.append(math.gcd(num, runningMax))
            
        # Phase 2: Sort the array
        prefixGCD.sort()
        
        # Phase 3: Two pointers from both ends
        totalSum = 0
        left, right = 0, len(prefixGCD) - 1
        
        while left < right:
            totalSum += math.gcd(prefixGCD[left], prefixGCD[right])
            left += 1
            right -= 1
            
        return totalSum