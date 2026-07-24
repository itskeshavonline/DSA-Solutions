class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        
        // 1. Find the maximum element to bound our XOR operations
        int maxEl = 0;
        for (int num : nums) {
            maxEl = max(maxEl, num);
        }
        
        // 2. Find the next power of 2 greater than maxEl (e.g., 2048 for 1500)
        int T = 1;
        while (T <= maxEl) {
            T <<= 1;
        }
        
        // 3. Find all unique XORs from any TWO elements
        vector<bool> s1(T, false);
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                s1[nums[i] ^ nums[j]] = true;
            }
        }
        
        // 4. XOR those unique pairs against the array to find all TRIPLET values
        vector<bool> s2(T, false);
        int uniqueCount = 0;
        
        for (int v = 0; v < T; v++) {
            if (s1[v]) {
                for (int i = 0; i < n; i++) {
                    int tripletXor = v ^ nums[i];
                    
                    // If we haven't seen this triplet value yet, count it
                    if (!s2[tripletXor]) {
                        s2[tripletXor] = true;
                        uniqueCount++;
                    }
                }
            }
        }
        
        return uniqueCount;
    }
};