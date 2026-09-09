class Solution {
  public:
    int setKthBit(int n, int k) {
        
        int setPosition = 1<<k;
        
        return n | setPosition;
    }
};
