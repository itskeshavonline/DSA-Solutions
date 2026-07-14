class Solution:
    def addBinary(self, a: str, b: str) -> str:
        result = []
        carry = 0
        
        # Pointers starting at the end of both strings
        i = len(a) - 1
        j = len(b) - 1
        
        # Loop as long as there are digits left to process or a carry remains
        while i >= 0 or j >= 0 or carry:
            total = carry
            
            # Add the digit from 'a' if bits are present in 'a'
            if i >= 0:
                total += int(a[i])
                i -= 1
                
            # Add the digit from 'b' if bits are present 'b'
            if j >= 0:
                total += int(b[j])
                j -= 1
            
            # The bit we write is total % 2
            result.append(str(total % 2))
            
            # The new carry is total // 2
            carry = total // 2
            
        # Since we collected digits from right to left, reverse the result
        return "".join(reversed(result))