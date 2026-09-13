class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        int ans = 0;

        while (low <= high) {
            long long mid = low + (high - low)/2;
            long long mysq = mid*mid;

            if(mysq == x) {
                return mid;
            } else if (mysq > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
                ans = mid;
            }
        }
        
        return ans;
    }
};