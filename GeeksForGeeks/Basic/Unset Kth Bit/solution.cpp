class Solution {
  public:
    int replaceBit(int n, int k) {
        
        int len = 0, temp = n;
        while (temp > 0) { 
            len++; 
            temp >>= 1; 
            
        }

        if (k > len) return n;
        
        return (n & (~(1<<len-k)));
    }
};