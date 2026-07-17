class Solution {
public:
    void getAllCombinations(vector<int> &combination, vector<int> &candidates, vector<vector<int>> &ans, int target, int idx) {
        // Base case: If we successfully hit the target
        if (target == 0) {
            ans.push_back(combination);
            return;
        }
        
        // Base case: Out of bounds or went negative
        if (idx == candidates.size() || target < 0) {
            return;
        }

        // Choice 1: Include the current element
        combination.push_back(candidates[idx]);
        getAllCombinations(combination, candidates, ans, target - candidates[idx], idx + 1);
        combination.pop_back(); // <-- CRITICAL: Clean up (backtrack) for the next choice!

        // Skip duplicate elements to avoid duplicate combinations
        while (idx + 1 < candidates.size() && candidates[idx] == candidates[idx + 1]) {
            idx++;
        }

        // Choice 2: Exclude the current element
        getAllCombinations(combination, candidates, ans, target, idx + 1);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        
        // Sorting is required to handle duplicates correctly
        sort(candidates.begin(), candidates.end());
        
        getAllCombinations(combination, candidates, ans, target, 0);        
        return ans;
    }
};