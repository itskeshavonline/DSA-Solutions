class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n + 2, 0);
        dp[n] = 0;     
        dp[n + 1] = 0; 

        for(int i = n - 1; i >= 0; i--) {

            int include = nums[i] + dp[i + 2];
            int exclude = dp[i + 1];
            
            dp[i] = max(include, exclude);
        }

        return dp[0];
    }
};


/*
class Solution {
public:
    int solve(vector<int>& nums, vector<int>& dp, int n) {
        if (n < 0) {
            return 0;
        }
        if (dp[n] != -1) {
            return dp[n];
        }

        int include = nums[n] + solve(nums, dp, n - 2);
        int exclude = 0 + solve(nums, dp, n - 1);

        dp[n] = max(include, exclude);
        return dp[n];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        
        return solve(nums, dp, n-1);
    }
};
*/
