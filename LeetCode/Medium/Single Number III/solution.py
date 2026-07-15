class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        xorAll = 0
        for num in nums:
            xorAll ^= num
            
        # Get the lowest set bit
        diffBit = xorAll & -xorAll
        
        num1 = 0
        num2 = 0
        
        # Partition and XOR
        for num in nums:
            if num & diffBit:
                num1 ^= num
            else:
                num2 ^= num
                
        return [num1, num2]