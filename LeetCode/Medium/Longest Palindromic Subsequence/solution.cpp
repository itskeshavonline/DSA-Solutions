class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int>(n, 0));

        for (int i = 0; i < n; i++) {
            dp[i][i] = 1;
        }

        for (int i = n - 1; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                } else {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[0][n - 1];
    }
};

// cell of dp matrix store answer(length of palindrome subsequence) from i to j for smaller versions of the same problem, so that we can reuse them to solve the bigger problem
// Every cell of matrix need other for answer
// i can increase only and j can decrease only to find palindrome
// That's why i started from n-1 and j from i to n in inner loop so that dp[i][j] already have what dp[i][j] will need 
// need = increamented i or decreamented j or both


// this recursive solution gives TLE
// class Solution {
// public:
//     int solve(string& s, int i, int j) {
//         if(i > j) return 0;

//         if(i == j) return 1;

//         if(s[i] == s[j]) {
//             return 2 + solve(s, i + 1, j - 1);
//         } else {
//             return max(solve(s, i + 1, j), solve(s, i, j - 1));
//         }
//     }

//     int longestPalindromeSubseq(string s) {
//         return solve(s, 0, s.length() - 1);
//     }
// };

// Other recursive solution 
// by reversing the original string and comparing the original and reversed strings till the end.
