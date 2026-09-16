class Solution {
public:
    int solveMem(int amount, int n, vector<int>& coins, vector<vector<int>>&dp) {
        if (amount == 0) return 1;
    
        if (amount < 0 || n <= 0) return 0;

        if (dp[n][amount] != -1) {
            return dp[n][amount];
        }

        int exclude = solveMem(amount, n - 1, coins,dp);
        
        int include = solveMem(amount - coins[n - 1], n, coins,dp);

        dp[n][amount]= exclude + include;
        return dp[n][amount];
    }

    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return solveMem(amount, n, coins,dp);
    }
};
