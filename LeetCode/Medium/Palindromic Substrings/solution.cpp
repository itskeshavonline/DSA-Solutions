class Solution {
public:
    int countSubstrings(string s) {
        int totalCount = 0;

        for(int i = 0; i < s.length(); i++) {
            // ODD
            int j = i;
            int oddAns = expand(s, i, j);

            // EVEN
            j = i + 1;
            int evenAns = expand(s, i, j);

            totalCount = totalCount + oddAns + evenAns;
        }

        return totalCount;
    }

    int expand(const string& s, int i, int j) {
        int count = 0;

        while(i >= 0 && j < s.length() && s[i] == s[j]) {
            count++;
            i--;
            j++;
        }

        return count;
    }
};