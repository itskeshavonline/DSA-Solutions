class Solution {
public:
    int n;
    unordered_map<int, int> mp;
    int memo[2001][2001]; // DP table for memoization

    bool solve(vector<int>& st, int currStIdx, int prevJump) {
        if(currStIdx == n - 1)
            return true;

        if(memo[currStIdx][prevJump] != -1)
            return memo[currStIdx][prevJump];
        
        bool result = false;
        for (int next = prevJump - 1; next <= prevJump + 1; next++) {
            if(next > 0) {
                int nextSt = st[currStIdx] + next;
                if(mp.find(nextSt) != mp.end()) {
                    result = result || solve(st, mp[nextSt], next);
                }
            }
        }
        
        return memo[currStIdx][prevJump] = result;
    }

    bool canCross(vector<int>& stones) {
        n = stones.size();
        if (stones[1] != 1) return false;
        
        memset(memo, -1, sizeof(memo));// set DP table to -1
        
        for (int i = 0; i < n; i++) {
            mp[stones[i]] = i;
        }
        
        // Start from index 1, with a previous jump of 1
        return solve(stones, 1, 1);
    }
};