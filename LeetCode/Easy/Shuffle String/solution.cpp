class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string sh = s;

        for (int i=0; i<n; i++) {
            sh[indices[i]] = s[i];
        }

        return sh;
    }
};