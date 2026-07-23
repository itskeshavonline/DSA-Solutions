class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        
        if (n <= 2) {
            return n;
        }
        
        // Calculate the number of bits required to represent n
        int k = 0;
        int temp = n;
        while (temp > 0) {
            k++;
            temp >>= 1;
        }
        
        // Return 2^k
        return 1 << k;
    }
};