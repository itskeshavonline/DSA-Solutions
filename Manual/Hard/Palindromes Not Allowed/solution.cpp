#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    // Count the frequency of each character
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }
    
    // Stride-3 placement logic failed 
    // Max-heap to always pick the character with the highest remaining frequency
    priority_queue<pair<int, char>> pq;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            pq.push({freq[i], (char)('a' + i)});
        }
    }
    
    queue<pair<int, char>> cooldown;
    string result = "";
    
    while (!pq.empty()) {
        // 1. Pick the most frequent available character
        auto [cnt, ch] = pq.top();
        pq.pop();
        
        // 2. Add it to the result and put it in cooldown
        result += ch;
        cooldown.push({cnt - 1, ch});
        
        // 3. If cooldown queue reaches size 3, the oldest character is safe to reuse
        if (cooldown.size() == 3) {
            auto [prev_cnt, prev_ch] = cooldown.front();
            cooldown.pop();
            
            // If it still needs to be placed, push it back to the available max-heap
            if (prev_cnt > 0) {
                pq.push({prev_cnt, prev_ch});
            }
        }
    }
    
    // 4. If we successfully placed all N characters, it's valid.
    if (result.length() == n) {
        cout << "YES\n";
        cout << result << "\n";
    } else {
        cout << "NO\n";
    }
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