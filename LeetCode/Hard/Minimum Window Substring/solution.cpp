class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.size() < t.size()) return "";

        vector<int> need(256, 0);
        for (char c : t) {
            need[(unsigned char)c]++;
        }

        int left = 0, right = 0;
        int required = t.size();
        int minLen = INT_MAX;
        int minStart = 0;

        for (right = 0; right < s.size(); right++) {
            // If character at right pointer is needed
            if (need[(unsigned char)s[right]] > 0) {
                required--;
            }
            need[(unsigned char)s[right]]--;//included in the window

            // When all characters are matched, shrink window from left
            while (required == 0) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minStart = left;
                }

                need[(unsigned char)s[left]]++;

                // If character at left was vital to t, increment required count
                if (need[(unsigned char)s[left]] > 0) {
                    required++;
                }
                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};

// above code uses only one freq array
// class Solution {
// public:
//     string minWindow(string s, string t) {
//         if(s.empty() || t.empty() || s.length() < t.length())
//             return "";

//         unordered_map<char, int> need, inWindow;

//         for(char c : t)
//             need[c]++;

//         int requiredCount = need.size();// Number of unique characters in t
//         int formedCount = 0;// Number of unique characters in the current window

//         int left = 0;
//         int minLen = INT_MAX;
//         int minStart = 0;

//         for(int right = 0; right < s.length(); right++) {
//             inWindow[s[right]]++;

//             //map.count(key) returns 1 if key is present otherwise 0. 
//             if(need.count(s[right]) && inWindow[s[right]] == need[s[right]])
//                 formedCount++;

//             while(left <= right && formedCount == requiredCount) {
//                 if(right - left + 1 < minLen) {
//                     minLen = right - left + 1;
//                     minStart = left;
//                 }

//                 inWindow[s[left]]--;

//                 if(need.count(s[left]) && inWindow[s[left]] < need[s[left]])
//                     formedCount--;

//                 left++;
//             }
//         }

//         return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
//     }
// };