#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        // Using ceiling division: (n + 5) / 6 calculates ceil(n / 6)
        int subscriptions = (n + 5) / 6;
        int price = subscriptions * x;
        
        cout << price << "\n";
    }
    return 0;
}