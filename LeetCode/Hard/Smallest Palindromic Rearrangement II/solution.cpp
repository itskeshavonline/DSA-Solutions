class Solution {
public:
    string smallestPalindrome(string s, int k) {
        vector<int> count(26, 0);
        for (char c : s) count[c - 'a']++;
        
        string mid = "", left = "";
        int halfLen = 0;
        
        // 1. Build half-counts and identify the middle character
        for (int i = 0; i < 26; i++) {
            if (count[i] % 2 != 0) {
                mid = (char)(i + 'a');
            }
            count[i] /= 2;
            halfLen += count[i];
        }

        // 2. Lambda to quickly calculate permutations for the remaining characters
        auto getPermutations = [&]() {
            long long res = 1;
            for (int i = 0, n = 0; i < 26; i++) {
                for (int j = 1; j <= count[i]; j++) {
                    res = res * (++n) / j; // Builds exact multinomial coefficient
                    // Cap safely above max k (10^6) to prevent overflow on long strings
                    if (res > 2000000) return (long long)2000000; 
                }
            }
            return res;
        };

        // 3. If k exceeds the total possible unique palindromes, return ""
        if (k > getPermutations()) {
            return "";
        }

        // 4. Greedily build the left half
        for (int i = 0; i < halfLen; i++) {
            for (int j = 0; j < 26; j++) {
                if (count[j] == 0) continue;
                
                count[j]--; // Try placing character 'j'
                long long perms = getPermutations();
                
                if (k <= perms) {
                    left += (char)(j + 'a'); // Lock it in!
                    break;
                }
                
                k -= perms; // Skip this branch
                count[j]++; // Backtrack
            }
        }
        
        // 5. Construct the final palindrome
        string right = left;
        reverse(right.begin(), right.end());
        return left + mid + right;
    }
};