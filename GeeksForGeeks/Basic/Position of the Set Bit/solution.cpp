class Solution {
  public:
    int findPosition(int n) {
        if (n == 0) return -1;
        
        int position = 0;
        
        if ((n & n-1) == 0) {
            while (n != 0) {
                n >>= 1;
                position++;
            }
            
            return position;
        }
        
        return -1;
        
    }
};