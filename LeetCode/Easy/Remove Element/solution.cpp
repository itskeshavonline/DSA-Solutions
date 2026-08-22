class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // Pointer for placing valid elements
        
        for (int x : nums) {
            if (x != val) {
                nums[k++] = x;  // Copy valid element and increment k
            }
        }
        
        return k;  // count of elements not equal to val
    }
};   