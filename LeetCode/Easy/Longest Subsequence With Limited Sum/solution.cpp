class Solution {
public:
    int binarySearch(vector<int>& nums, int target) {
        int n = nums.size();

        int left = 0, right = n-1;
        while (left <= right) {
            int mid = left + (right - left)/2;

            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();

        sort(nums.begin(), nums.end());

        for (int i=1; i<n; i++) {
            nums[i] = nums[i] + nums[i-1];
        }

        vector<int> ans;
        ans.reserve(m);

        for(int q : queries) {
            int count = binarySearch(nums, q);
            ans.push_back(count);
        }

        return ans;
    }
};