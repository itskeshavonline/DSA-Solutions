#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int even = 0;
        
    for (int i=0; i<n; i++) {
        int weapons; //no need of array
        cin >> weapons;
        if (weapons%2 == 0) {
            even++;
        }
    }
    
    if (even > n-even) cout << "READY FOR BATTLE\n";
    else cout << "NOT READY\n";
    
    return 0;
}