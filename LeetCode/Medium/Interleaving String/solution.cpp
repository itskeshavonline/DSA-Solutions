class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1 = s1.length(), n2 = s2.length();
        if (n1 + n2 != s3.length()) return false;
        
        vector<vector<bool>> dp(n1 + 1, vector<bool>(n2 + 1, false));

        dp[n1][n2] = true;

        for (int i = n1; i >= 0; i--) {
            for (int j = n2; j >= 0; j--) {
                
                // skip base case
                if (i == n1 && j == n2) continue;

                bool canForm = false;

                // Branch 1: Try taking from s1
                if (i >= 0 && s1[i] == s3[i + j]) {
                    canForm = canForm || dp[i+1][j];
                }

                // Branch 2: Try taking from s2
                if (j >= 0 && s2[j] == s3[i + j]) {
                    canForm = canForm || dp[i][j+1];
                }

                dp[i][j] = canForm;
            }
        }

        return dp[0][0];
    }
};


/*
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1 = s1.length(), n2 = s2.length();
        if (n1 + n2 != s3.length()) return false;
        
        // -1 (Unvisited) and visited 0 - false, 1 - true
        vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
        
        return explore(0, 0, s1, s2, s3, dp);
    }

    bool explore(int i, int j, string& s1, string& s2, string& s3, vector<vector<int>>& dp) {
        // Base case
        if (i == s1.length() && j == s2.length()) return true;

        if (dp[i][j] != -1) {
            return dp[i][j] == 1; 
        }

        bool canForm = false;

        // Branch 1: Try taking from s1
        if (i < s1.length() && s1[i] == s3[i + j]) {
            canForm = canForm || explore(i + 1, j, s1, s2, s3, dp);
        }

        // Branch 2: Try taking from s2
        if (j < s2.length() && s2[j] == s3[i + j]) {
            canForm = canForm || explore(i, j + 1, s1, s2, s3, dp);
        }

        dp[i][j] = canForm ? 1 : 0;
        return canForm;
    }
};
*/