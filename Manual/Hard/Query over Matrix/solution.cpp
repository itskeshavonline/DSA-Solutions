#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> left(n + 1), right(n + 1);
    vector<int> diff(n + 2, 0); // Diff array
    vector<int> col(n + 1, 0);  // Col sums
    
    long long totSum = 0;
    
    for (int i = 1; i <= n; i++) {
        cin >> left[i] >> right[i];
        
        // Add row sum
        totSum += right[i] - left[i] + 1;
        
        // Update diff
        diff[left[i]] += 1;
        diff[right[i] + 1] -= 1;
    }
    
    // Base parity (0=E, 1=O)
    int par = totSum % 2;
    
    // Calc true col sums
    int curr = 0;
    for (int i = 1; i <= n; i++) {
        curr += diff[i];
        col[i] = curr;
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        int x, y;
        cin >> x >> y;
        
        // Get components
        int rSum = right[x] - left[x] + 1;
        int cSum = col[y];
        int val = (y >= left[x] && y <= right[x]) ? 1 : 0;//intersection element
        
        // Calc ans
        int ans = par - (rSum % 2) - (cSum % 2) + val;
        ans = (ans % 2 + 2) % 2;
        
        cout << (ans == 0 ? "E\n" : "O\n");
    }
    
    return 0;
}