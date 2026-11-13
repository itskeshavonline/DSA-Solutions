#include <bits/stdc++.h>
using namespace std;

void bfs(int n, vector<vector<int>>& adj, int k) {

    vector<bool> visited(n + 1, false);
    queue<int> q;

    q.push(1);
    visited[1] = true;

    int level = 0;

    while (!q.empty()) {
        
        if (level == k) {
            vector<int> ans;

            while (!q.empty()) {
                ans.push_back(q.front());
                q.pop();
            }

            sort(ans.begin(), ans.end());

            for (int x : ans) {
                cout << x << " ";
            }

            return;
        }

        int size = q.size();
        for (int i = 0; i < size; i++) {
            int node = q.front();
            q.pop();

            for (int neighbour : adj[node]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }

        level++;
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(n, adj, k);

    return 0;
}
