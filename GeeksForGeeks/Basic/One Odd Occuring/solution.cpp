class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int p = arr[0];
        for(int i=1; i<arr.size(); i++) {
            p ^= arr[i];
        }
        return p;
    }
};