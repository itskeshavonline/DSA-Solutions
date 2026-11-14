#include <bits/stdc++.h>
using namespace std;

int maxDist = 0;
int farthestNode = 1;

void DFS(int node, int parent, int dist,
         vector<vector<int>> &adj) {

    if (dist > maxDist) {
        maxDist = dist;
        farthestNode = node;
    }

    for (int child : adj[node]) {
        if (child != parent) {
            DFS(child, node, dist + 1, adj);
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

    // First DFS: to find the farthestNode
    maxDist = 0;
    DFS(1, 0, 0, adj);

    int A = farthestNode;

    // Second DFS: to find the farthestNode from A(maxDist)
    maxDist = 0;
    DFS(A, 0, 0, adj);

    cout << maxDist << endl;

    return 0;
}