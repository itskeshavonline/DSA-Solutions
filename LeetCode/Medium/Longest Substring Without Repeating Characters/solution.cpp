class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Array to store last seen index of each ASCII character
        vector<int> lastPos(256, -1);
        
        int maxLen = 0;
        int left = 0; // Left boundary of sliding window

        for (int right = 0; right < s.size(); right++) {
            unsigned char currentChar = s[right];

            // If character was seen inside current window, move left pointer
            if (lastPos[currentChar] >= left) {
                left = lastPos[currentChar] + 1;
            }

            // Update character's last seen position
            lastPos[currentChar] = right;

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};