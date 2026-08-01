class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        
        // dp[i] will store the maximum score difference for the subarray starting at i
        vector<int> dp(n, 0);
        
        // Base case: subarrays of length 1 (i == j)
        for (int i = 0; i < n; i++) {
            dp[i] = nums[i];
        }
        
        // Build the DP table for increasing lengths of subarrays
        for (int len = 2; len <= n; len++) {
            // Traverse all possible starting points for the current length
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                
                // Transition: Maximize (pick left - opponent future, pick right - opponent future)
                // dp[i + 1] holds the value for subarray nums[i+1...j] from the previous length iteration
                // dp[i] currently holds the value for subarray nums[i...j-1]
                dp[i] = max(nums[i] - dp[i + 1], nums[j] - dp[i]);
            }
        }
        
        // Player 1 wins if the max difference over the entire array is >= 0
        return dp[0] >= 0;
    }
};