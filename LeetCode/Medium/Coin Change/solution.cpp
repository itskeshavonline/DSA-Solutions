class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        
        // Base case
        dp[0] = 0;
        
        for (int i = 1; i <= amount; i++) {
            // Try every coin for the current amount 'i'
            for (int coin : coins) {
                if (i >= coin) {
                    // Overwrite dp[i] with the minimum coins needed
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }
        
        return dp[amount] > amount ? -1 : dp[amount];
    }
};


/*
class Solution {
    // Passed dp array by reference to cache results
    int solve(vector<int>& coins, int amount, vector<int>& dp) {
        if (amount == 0) return 0;

        // 1. Return cached result if already calculated
        if (dp[amount] != -1) return dp[amount];

        int ans = INT_MAX;

        // 2. Fixed scope issue by using coins.size()
        for (int i = 0; i < coins.size(); i++) {
            if (coins[i] <= amount) {
                int count = solve(coins, amount - coins[i], dp);

                if (count != INT_MAX) {
                    ans = min(ans, 1 + count);
                }
            }
        }

        // 3. Cache the result before returning
        return dp[amount] = ans;
    }

public:
    int coinChange(vector<int>& coins, int amount) {
        // Initialize 1D DP array with -1
        vector<int> dp(amount + 1, -1);
        
        int ans = solve(coins, amount, dp);

        if (ans == INT_MAX) return -1;

        return ans;
    }
};
*/