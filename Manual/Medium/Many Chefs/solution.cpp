#include <bits/stdc++.h>
using namespace std;

bool canFormChef(const string& s, int i) {
    if (s[i] != 'C' && s[i] != '?') return false;
    if (s[i + 1] != 'H' && s[i + 1] != '?') return false;
    if (s[i + 2] != 'E' && s[i + 2] != '?') return false;
    if (s[i + 3] != 'F' && s[i + 3] != '?') return false;
    return true;
}

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    // Step 1: Scan right-to-left to maximize 'A's near the beginning
    for (int i = n - 4; i >= 0; i--) {
        if (canFormChef(s, i)) {
            s[i] = 'C';
            s[i + 1] = 'H';
            s[i + 2] = 'E';
            s[i + 3] = 'F';
            i -= 3; // Jump left to prevent overlapping
        }
    }
    
    // Step 2: for lexicographically smallest result
    for (int i = 0; i < n; i++) {
        if (s[i] == '?') {
            s[i] = 'A';
        }
    }
    
    cout << s << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
