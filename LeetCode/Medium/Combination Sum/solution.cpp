class Solution {
public:
    set<vector<int>> s;

    void getAllCombinations(vector<int> candidates, int idx, int target, vector<vector<int>>& ans, vector<int> &combination) {
        if(idx == candidates.size() || target < 0) {
            return;
        }

        if(target == 0) {
            if(s.find(combination) == s.end()) {
                ans.push_back(combination);
                s.insert(combination);
                return;
            }   
        }

        combination.push_back(candidates[idx]);
        // single choice: An element is picked single time from candidates array
        getAllCombinations(candidates, idx+1, target-candidates[idx], ans, combination);
        // multiple choice: An element is picked multiple time from candidates array
        getAllCombinations(candidates, idx, target-candidates[idx], ans, combination);

        combination.pop_back(); // backtrack
        // exclude: not picked element from idx+1
        getAllCombinations(candidates, idx+1, target, ans, combination);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combination;
        getAllCombinations(candidates, 0, target, ans, combination);
        return ans;
    }
};