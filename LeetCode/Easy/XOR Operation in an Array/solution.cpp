class Solution {
public:
    int xorOperation(int n, int start) {
        int xr = start;
        
        for (int i=1; i<n; i++) {
            xr ^= (start + 2*i);
        }

        return xr;
    }
};