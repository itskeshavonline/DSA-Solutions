#include <bits/stdc++.h>
using namespace std;

int countLeaf(int node, vector<vector<int>>& adj) {
    // If node has no child, it is a leaf and it should not be the root
    if (adj[node].size() == 0 && node != 0) {
        return 1;
    }

    int count = 0;

    for (int child : adj[node]) {
        count += countLeaf(child, adj);
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
    }

    cout << countLeaf(0, adj);

    return 0;
}
