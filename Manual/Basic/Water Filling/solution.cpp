#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int B1, B2, B3;
        cin >> B1 >> B2 >> B3;
        
        cout << (B1 + B2 + B3 <= 1 ? "Water filling time\n" : "Not now\n");
    }
    return 0;
}