class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
        # Constants for 32-bit limits
        INT_MIN, INT_MAX = -2**31, 2**31 - 1

        # Edge case: overflow handler
        if dividend == INT_MIN and divisor == -1:
            return INT_MAX

        # Determine sign
        sign = -1 if (dividend > 0) != (divisor > 0) else 1

        # Python integers have no upper bound,
        # abs() can safely convert any negative integer to its positive counterpart without overflow unlike C++/Java.
        absDividend = abs(dividend)
        absDivisor = abs(divisor)

        quotient = 0

        # Exponential subtraction loop
        while absDividend >= absDivisor:
            tempDivisor = absDivisor
            count = 1

            # Keep doubling the divisor dynamically
            while absDividend >= (tempDivisor << 1):
                tempDivisor <<= 1
                count <<= 1

            absDividend -= tempDivisor
            quotient += count

        return sign * quotient