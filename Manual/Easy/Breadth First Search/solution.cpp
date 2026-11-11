#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    
    visited[start] = true;
    q.push(start);
    
    while(!q.empty()) {
        int node = q.front();
        // print while popping node from the queue
        q.pop();
        
        cout << node << " ";
        
        for (int i=0; i<adj[node].size(); i++) {
            if (!visited[adj[node][i]]) {

                // mark node true while pushing into queue
                q.push(adj[node][i]);
                visited[adj[node][i]] = true;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    
    vector<vector<int>> adj(n+1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    
    int start = 1;
    bfs(start, adj, n);
    
    return 0;
}