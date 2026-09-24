class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;

        for (int num : nums) {
            // If num == 1: -num is all 1s. (count + 1) & 0xFFFFFFFF -> keeps count.
            // If num == 0: -num is 0.      (count + 0) & 0x00000000 -> resets to 0.
            count = (count + num) & (-num);
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};


/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = INT_MIN;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                maxCount = max(maxCount, count);
                count = 0;
            }
        }

        maxCount = max(maxCount, count);

        return maxCount;
    }
};
*/


