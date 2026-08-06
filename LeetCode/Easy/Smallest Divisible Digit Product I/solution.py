class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        def get_digit_product(num: int) -> int:
            product = 1
            while num > 0:
                product *= num % 10
                num //= 10
            return product
        
        num = n
        while True:
            if get_digit_product(num) % t == 0:
                return num
            num += 1   