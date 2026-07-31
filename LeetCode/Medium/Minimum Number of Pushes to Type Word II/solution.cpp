class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        
        // 1. Count the frequency of each letter
        for (char c : word) {
            freq[c - 'a']++;
        }
        
        // 2. Sort frequencies in descending order
        sort(freq.rbegin(), freq.rend());
        
        int totalPushes = 0;
        
        // 3. Assign pushes based on sorted rank
        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) {
                break; // No more characters left to map
            }
            // (i / 8) + 1 gives the cost: 1 push for indices 0-7, 2 for 8-15, etc.
            totalPushes += freq[i] * ((i / 8) + 1);
        }
        
        return totalPushes;
    }
};