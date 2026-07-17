class Solution {
private:
    void getPermutations(vector<int>& nums, int index, vector<vector<int>>& ans) {
        // Base Case: If index reaches the end, a valid permutation is formed
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Loop through all choices available from the current index onwards
        for (int i = index; i < nums.size(); i++) {
            // Take action: Swap to place the element at the current 'index' position
            swap(nums[index], nums[i]);

            // Recurse: Move to the next index position
            getPermutations(nums, index + 1, ans);

            // Backtrack: Undo the swap to restore the array for the next iteration
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPermutations(nums, 0, ans);
        return ans;
    }
};
