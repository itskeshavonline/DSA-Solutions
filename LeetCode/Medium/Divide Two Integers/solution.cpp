class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == 1) {
            return INT_MIN;
        }

        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        // Using long long to prevent overflow
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);

        long long quotient = 0;

        for (int i = 31; i >= 0; --i) {
            // Check if divisor shifted by i fits into dividend
            if ((absDivisor << i) <= absDividend) {
                absDividend -= absDivisor << i;
                quotient |= ((long long)1 << i);
            }
        }

        quotient = (sign == -1) ? -quotient : quotient;

        // Safety clamp
        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;

        return static_cast<int>(quotient);
    }
};



/*
SECOND METHOD: Exponential Subtraction

class Solution { 
public: 
    int divide(int dividend, int divisor) { 

        // Edge case: overflow 
        if (dividend == INT_MIN && divisor == -1) { 
            return INT_MAX; 
        } 

        // Determine sign 
        int sign = ((dividend > 0) != (divisor > 0)) ? -1 : 1; 

        // Convert to positive int values 
        long long absDividend = abs((long long)dividend); 
        long long absDivisor = abs((long long)divisor); 

        long long quotient = 0; 

        // Keep subtracting the largest possible multiple 
        while (absDividend >= absDivisor) { 

            long long tempDivisor = absDivisor; 
            long long count = 1; 

            // Keep doubling the divisor 
            while (absDividend >= (tempDivisor << 1)) { 
                tempDivisor <<= 1; 
                count <<= 1; 
            } 

            // Subtract the largest multiple 
            absDividend -= tempDivisor; 

            // Add its corresponding multiple to quotient 
            quotient += count; 
        } 
        return sign * quotient; 
    } 
};
*/
