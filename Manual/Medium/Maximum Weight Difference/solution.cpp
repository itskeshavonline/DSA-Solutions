#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n, k;
            cin >> n >> k;
            
            vector<int> w(n);
            long long totalSum = 0;
            for (int i = 0; i < n; i++) {
                cin >> w[i];
                totalSum += w[i];
            }
            
            sort(w.begin(), w.end());
            
            k = min(k, n - k); 
            
            long long kidWt = 0;
            for (int i = 0; i < k; i++) {
                kidWt += w[i];
            }
            
            long long chefWt = totalSum - kidWt;
            long long maxDiff = chefWt - kidWt;
            
            cout << maxDiff << "\n";
        }
    }
    
    return 0;
}