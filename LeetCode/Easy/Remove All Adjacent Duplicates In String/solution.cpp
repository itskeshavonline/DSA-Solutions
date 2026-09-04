class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";

        for(int i = 0; i < s.length(); i++) {
            // ans ka rightmost character and string s ka current character
            if(ans.length() > 0 && ans[ans.length()-1] == s[i]) {
                // pop from ans string
                ans.pop_back();
            }
            else {
                ans.push_back(s[i]);
            }
        }

        return ans;
    }
};