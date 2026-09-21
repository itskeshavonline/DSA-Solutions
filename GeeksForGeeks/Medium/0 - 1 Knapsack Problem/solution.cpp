class Solution { 
public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
    
        vector<int> next(W + 1, 0);
        vector<int> curr(W + 1, 0);
    
        for (int i = n - 1; i >= 0; i--) {
    
            for (int j = 0; j <= W; j++) {
    
                int take = INT_MIN;
    
                if (wt[i] <= j) {
                    take = val[i] + next[j - wt[i]];
                }
    
                int leave = next[j];
    
                curr[j] = max(take, leave);
            }
    
            // current row becomes next row
            next = curr;
        }
    
        return next[W];
    }
};


/*
class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        int spaceLeft = W;
        vector<vector<int>> dp(n+1, vector<int>(W + 1, -1));
        
        // Base case
        for (int i=0; i<W+1; i++) {
            dp[n][i] = 0;
        }
        
        for (int i=n-1; i>=0; i--) {
            for (int j=0; j<W+1; j++) {
                
                int take = INT_MIN;
                if (wt[i] <= j) {
                    take = val[i] + dp[i+1][j - wt[i]];
                }
                
                int leave = dp[i+1][j];
                
                dp[i][j] = max(take, leave);
            }
        }
        
        return dp[0][W];
    }
};
*/


/*
class Solution {
  public:
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        int spaceLeft = W;
        vector<vector<int>> dp(n, vector<int>(W + 1, -1));
        
        return solve(0, val, wt, spaceLeft, dp);
    }
    
    int solve(int i, vector<int> &val, vector<int> &wt,int spaceLeft, vector<vector<int>> &dp) {
        if (i >= val.size()) return 0;
        
        if (dp[i][spaceLeft] != -1) return dp[i][spaceLeft];
        
        int take = INT_MIN;
        if (wt[i] <= spaceLeft) {
            take = val[i] + solve(i+1, val, wt, spaceLeft - wt[i], dp);
        }
        
        int leave = solve(i+1, val, wt, spaceLeft, dp);
        
        dp[i][spaceLeft] = max(take, leave);
        
        return dp[i][spaceLeft];
    }
};
*/