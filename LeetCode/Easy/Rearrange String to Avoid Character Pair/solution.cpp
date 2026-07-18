class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n = s.size();
        int left = 0;       // Pointer for 'y' position
        int right = n - 1;  // Pointer for 'x' position
        int i = 0;          // Current scanning pointer

        while (i <= right) {
            if (s[i] == y) {
                // Move character to the front
                swap(s[i], s[left]);
                left++;
                i++;
            } 
            else if (s[i] == x) {
                // Move character to the back
                swap(s[i], s[right]);
                right--;
                // Do NOT increment 'i' here; we need to check the swapped character
            } 
            else {
                i++;
            }
        }
        return s;
    }
};   