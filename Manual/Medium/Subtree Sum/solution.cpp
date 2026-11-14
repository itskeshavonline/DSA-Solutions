#include <bits/stdc++.h>
using namespace std;

void DFS(int node, int parent, vector<vector<int>> &adj, vector<long long> &subtreeSum) {

    subtreeSum[node] = node;

    for (int child : adj[node]) {
        if (child != parent) {
            DFS(child, node, adj, subtreeSum);

            subtreeSum[node] += subtreeSum[child];
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<long long> subtreeSum(n + 1, 0);

    DFS(1, 0, adj, subtreeSum);

    for (int i = 1; i <= n; i++) {
        cout << subtreeSum[i] << " ";
    }

    return 0;
}