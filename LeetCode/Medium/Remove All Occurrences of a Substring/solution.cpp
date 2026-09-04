class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans = "";
        int m = part.length();

        for (char c : s) {
            ans.push_back(c);

            // Check if the suffix matches 'part'
            if (ans.size() >= m) {
                // Extract the suffix of length m from ans and compare
                if (ans.substr(ans.size() - m) == part) {
                    // "Pop" the last m characters
                    ans.erase(ans.size() - m);
                }
            }
        }

        return ans;
    }
};
// TC : O(n*m) & SC: O(n)



// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         size_t pos;
//         while((pos = s.find(part)) != string::npos){
//             s.erase(pos, part.length());
//         }
//         return s;
//     }
// };
// TC : O(n*n/m) & SC: O(1)