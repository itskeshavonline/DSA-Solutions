class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> remainderFreq(k, 0);

        int prefixSum = 0;

        for (int i=0; i<n; i++) {
            prefixSum = ((prefixSum + nums[i])%k + k)%k;
            remainderFreq[prefixSum]++;
        }

        int count = 0;
        for (int i=0; i<k; i++) {
            count += (remainderFreq[i]*(remainderFreq[i]-1))/2;
        }
        count += remainderFreq[0];

        return count;
    }
};