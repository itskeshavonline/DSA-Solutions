class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int count = 1;
        while((n & 1) == 0) {
            count++;
            n = n >> 1;
        }
        
        return count;
    }
};