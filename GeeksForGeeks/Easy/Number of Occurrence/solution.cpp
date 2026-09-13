class Solution {
  public:
    int countFreq(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size()-1;
        int mid;
        int firstPos = -1, lastPos = -1;

        while(st <= end) {
            mid = st + (end - st)/2;

            if (nums[mid] < target) {
                st = mid + 1;
            } else if (nums[mid] > target) {
                end = mid - 1; 
            } else if (nums[mid] == target) {
                if (mid == 0 || nums[mid] != nums[mid-1]) {
                    firstPos = mid;
                    break;
                } else {
                    end = mid - 1;
                }
            }
        }
        
        if (firstPos == -1) {
            return 0;
        } else {
            int st = 0;
            int end = nums.size()-1;
            int mid;
            
            while(st <= end) {
                mid = st + (end - st)/2;

                if (nums[mid] < target) {
                    st = mid + 1;
                } else if (nums[mid] > target) {
                    end = mid - 1; 
                } else if (nums[mid] == target) {
                    if (mid == nums.size()-1 || nums[mid] != nums[mid+1]) {
                        lastPos = mid;
                        break;
                    } else {
                        st = mid + 1;
                    }
                }
            }
        }
        
        return lastPos-firstPos+1;
    }
};