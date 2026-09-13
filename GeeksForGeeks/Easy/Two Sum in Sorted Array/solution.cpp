class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size()-1;
        
        while (low < high) {
            int sum = arr[low] + arr[high];
            if (sum == target) {
                return {low+1, high+1};
            } else if (sum < target) {
                low++;
            } else {
                high--;
            }
        }
        
        return {-1, -1};
        
    }
};