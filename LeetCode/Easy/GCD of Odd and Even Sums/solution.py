class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        # sumOdd = n*n
        # sumEven = n*(n+1)
        # GCD(n*n, n*(n+1)) = n * GCD(n, n+1) = n
        # therefore n, n+1 are coprimes, GCD(n, n+1) = 1
        return n
        