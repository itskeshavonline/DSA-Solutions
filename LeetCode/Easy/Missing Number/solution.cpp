class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xr1 = 0, xr2 = 0;

        for(int a : nums) xr1 ^= a;
        for (int i=0; i<=n; i++) xr2 ^= i;
        
        return xr1 ^ xr2;
    }
};