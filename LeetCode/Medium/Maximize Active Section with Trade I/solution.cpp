class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int originalOnes = 0;
        vector<int> zeroGroupLengths;
        
        int currentZeroCount = 0;
        
        for (char ch : s) {
            if (ch == '1') {
                originalOnes++;
                if (currentZeroCount > 0) {
                    zeroGroupLengths.push_back(currentZeroCount);
                    currentZeroCount = 0;
                }
            } else {
                currentZeroCount++;
            }
        }
        
        // Push the trailing zero group if s ended with '0'
        if (currentZeroCount > 0) {
            zeroGroupLengths.push_back(currentZeroCount);
        }
        
        // Find maximum sum of two adjacent '0' blocks
        int maxZeroMerge = 0;
        for (size_t i = 0; i + 1 < zeroGroupLengths.size(); ++i) {
            maxZeroMerge = max(maxZeroMerge, zeroGroupLengths[i] + zeroGroupLengths[i + 1]);
        }
        
        return originalOnes + maxZeroMerge;
    }
};