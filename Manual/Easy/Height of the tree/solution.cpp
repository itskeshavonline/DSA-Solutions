#include <bits/stdc++.h>
using namespace std;

int dfs(int node, int parent, vector<vector<int>>& adj) {

    int height = 0;

    for (int neighbour : adj[node]) {
        if (neighbour != parent) {
            height = max(height, 1 + dfs(neighbour, node, adj));
        }
    }

    return height;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n+1);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << dfs(1, 0, adj);

    return 0;
}
