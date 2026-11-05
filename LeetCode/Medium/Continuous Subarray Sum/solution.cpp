class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Map to store {prefixSum % k : first_seen_index}
        unordered_map<int, int> remainderMap;
        
        // Base case: to handle subarrays that start from index 0.
        // act as if we saw a remainder of 0 at index -1.
        remainderMap[0] = -1;
        
        long long prefixSum = 0;
        
        for (int i = 0; i < n; i++) {

            prefixSum = (prefixSum + nums[i]) % k;// for integer overflow

            long long remainder = prefixSum;
            remainder = (remainder + k) % k;// for negative values

            // check if seen this remainder before
            if (remainderMap.find(remainder) != remainderMap.end()) {
                // check the subarray length is at least 2
                if (i - remainderMap[remainder] >= 2) {
                    return true;
                }
            } else {
                // store if not seen before
                remainderMap[remainder] = i;
            }
        }
        
        return false;
    }
};