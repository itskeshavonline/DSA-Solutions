class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<n; i++) {
            int low = i+1;
            int high = n-1;
            int sum = target - arr[i];

            while (low < high) {
                int sum2 = arr[low] + arr[high];
                if (sum2 == sum) {
                    return true;
                } else if (sum2 < sum) {
                    low++;
                } else {
                    high--;
                }
            }
        }
        
        return false;
        
    }
};