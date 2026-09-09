class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        int xr = 0;

        // XOR of all elements = x ^ y
        for (int num : arr)
            xr ^= num;

        // Get rightmost set bit where x and y differ
        int setBit = xr & (-xr);// 

        int x = 0, y = 0;

        // Divide numbers into two groups then xor
        // Duplicate will come in same groups
        for (int num : arr) {
            if (num & setBit)
                x ^= num; // Group 0
            else
                y ^= num; // Group 1
        }

        if(x < y) {
            return {y, x};
        } else {
            return {x, y};
        }
    }
};