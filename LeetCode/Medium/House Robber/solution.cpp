class Solution {
public:
int theft(vector<int>& nums, int i, int n, vector<int>& dp) {
    if (i >= n) {
        return 0;
    }
    if (dp[i] != -1) {
        return dp[i];
    }

    int include = nums[i] + theft(nums, i+2, n, dp);
    int exclude = 0 + theft(nums, i+1, n, dp);
    dp[i] = max(include, exclude);
    return dp[i];

}
    int rob(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        vector<int> dp(n+1, -1);
        return theft(nums, i, n, dp);
    }
};