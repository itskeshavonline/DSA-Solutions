class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> basket;
        int left = 0;
        int maxCount = 0;

        for (int right = 0; right < fruits.size(); ++right) {
            // Add current fruit to the basket count
            basket[fruits[right]]++;

            // If we have more than 2 distinct fruit types, shrink window from left
            while (basket.size() > 2) {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0) {
                    basket.erase(fruits[left]);
                }
                left++;
            }
            
            maxCount = max(maxCount, right - left + 1);
        }

        return maxCount;
    }
};