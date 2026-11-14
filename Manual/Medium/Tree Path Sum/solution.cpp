class Solution {
public:
    bool dfs(int node, int parent, int sum, int target_sum,
             vector<vector<int>> &adj) {

        sum += node;

        bool isLeaf = true;

        for (auto child : adj[node]) {
            if (child != parent) {
                isLeaf = false;

                if (dfs(child, node, sum, target_sum, adj)) {
                    return true;
                }
            }
        }

        if (isLeaf && sum == target_sum) {
            return true;
        }

        return false;
    }

    bool solution(int n, int target_sum, vector<vector<int>> &adj) {
        return dfs(1, -1, 0, target_sum, adj);
    }
};