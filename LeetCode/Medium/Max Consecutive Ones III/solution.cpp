class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        
        for (right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                k--;
            }
            
            // If window is invalid, shift the whole window (left and right move together)
            // we used if instead of while to prevent window from shrinking to preserve the maxCount of 1s
            // while loop will shrink the window until it did not found the 0 inside the window by left++ and will stop when k++ 
            if (k < 0) {
                if (nums[left] == 0) {
                    k++;
                }
                left++;
            }
        }
        
        return right - left;
    }
};