class Solution:
    def rangeBitwiseAnd(self, left: int, right: int) -> int:
        shifts = 0
        # Shift right until left and right converge on their common prefix
        # consecutive binary numbers like in range, the lower or rightmost bits flip back and forth constantly between 1 and 0
        # in a bitwise AND operation, a single 0 completely turn a column bit position to 0
        # stops when left == right
        while left < right:
            left >>= 1
            right >>= 1
            shifts += 1
            
        # Restore bitwise AND by shifting back left
        return left << shifts