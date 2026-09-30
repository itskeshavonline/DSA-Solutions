#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Number of sticks and maximum difference
    int N;
    long long D;
    if (!(cin >> N >> D)) return 0;
    
    // Lengths of the sticks
    vector<long long> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    
    // Sort the sticks in non-decreasing order
    sort(L.begin(), L.end());
    
    int usablePairs = 0;
    
    // Greedily pair adjacent sticks
    for (int i = 0; i < N - 1; i++) {
        if (L[i + 1] - L[i] <= D) {
            usablePairs++;
            i++; // Skip the next stick because it is now paired
        }
    }
    
    cout << usablePairs << "\n";
    
    return 0;
}