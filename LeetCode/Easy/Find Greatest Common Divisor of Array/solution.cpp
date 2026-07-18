class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int minN = INT_MAX;
        int maxN = INT_MIN;

        for(int i=0; i<n; i++) {
            maxN = max(maxN, nums[i]);
            minN = min(minN, nums[i]);
        }

        while(minN != 0) {
            int temp = minN;
            minN = maxN % minN;
            maxN = temp;
        }

        return maxN;
    }
};