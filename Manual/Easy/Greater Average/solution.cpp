#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if ((a + b) > 2 * c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}