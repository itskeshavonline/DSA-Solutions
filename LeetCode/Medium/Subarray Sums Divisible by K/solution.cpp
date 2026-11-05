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
            count += (remainderFreq[i]*(remainderFreq[i]-1))/2;// combinations formula for 2 
        }
        count += remainderFreq[0];//it can be avoided by using remainderFreq[0]=1 
        // after vector intitialization for empty prefixSum for remainder 0

        return count;
    }
};

// other approach avoiding combinations formula
/*
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = ((sum % k) + k) % k;
            ans += mp[rem];
            mp[rem]++;
        }

        return ans;
    }
};
*/
