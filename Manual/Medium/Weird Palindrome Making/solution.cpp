#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int count = 0;
        for (int i=0; i<n; i++) {
            int a;
            cin >> a;
            
            count += a%2;
        }
        
        cout << count/2 << "\n";
    }
    
    return 0;
}
