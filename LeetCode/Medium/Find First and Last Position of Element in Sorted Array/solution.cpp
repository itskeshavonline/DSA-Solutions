class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPos = findFirst(nums, target);
        int lastPos = findLast(nums, target);
        
        return {firstPos, lastPos};
    }

private:
    // function to find the first position
    int findFirst(const vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        int firstPos = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                firstPos = mid;   // Record the potential answer
                end = mid - 1;    // Keep searching to the left for an even earlier position
            } else if (nums[mid] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return firstPos;
    }

    // Helper function to find the last position
    int findLast(const vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        int lastPos = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] == target) {
                lastPos = mid;    // Record the potential answer
                st = mid + 1;     // Keep searching to the right for a later position
            } else if (nums[mid] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return lastPos;
    }
};
