class Solution {
  public:
    int minCost(vector<int>& height) {
        int n = height.size();
        vector<int> dp(n, -1);
        return solve(n - 1, height, dp);
    }

    int solve(int i, vector<int>& h, vector<int>& dp) {
        if (i == 0) return 0;

        if (dp[i] != -1) return dp[i];

        int oneStep = solve(i - 1, h, dp) + abs(h[i] - h[i - 1]);

        int twoStep = INT_MAX;
        if (i > 1) {
            twoStep = solve(i - 2, h, dp) + abs(h[i] - h[i - 2]);
        }

        return dp[i] = min(oneStep, twoStep);
    }
};