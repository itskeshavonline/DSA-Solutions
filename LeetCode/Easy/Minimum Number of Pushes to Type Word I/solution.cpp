class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int totalPushes = 0;
        
        for (int i = 0; i < n; i++) {
            // (i / 8) tells us which "row" of the keypad we are placing the letter on
            totalPushes += (i / 8) + 1;
        }
        
        return totalPushes;
    }
};