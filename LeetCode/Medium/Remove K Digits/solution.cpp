class Solution {
public:
    string removeKdigits(string num, int k) {
        // If we have to remove all digits, the answer is always "0"
        if (num.size() == k) return "0";

        string smallest = ""; // We use this string directly as our stack!

        for (char digit : num) {
            // While our "stack" is not empty, we still have removals left,
            // and the last digit added is greater than the current digit:
            while (!smallest.empty() && k > 0 && smallest.back() > digit) {
                smallest.pop_back(); 
                k--;
            }
            smallest.push_back(digit);
        }

        // Edge Case 1: If we still have removals left, remove elements from end
        while (k > 0 && !smallest.empty()) {
            smallest.pop_back();
            k--;
        }

        // Edge Case 2: Strip any leading zeros
        int nonZeroIndex = 0;
        while (nonZeroIndex < smallest.size() && smallest[nonZeroIndex] == '0') {
            nonZeroIndex++;
        }
        
        // Slice the string starting from the first non-zero character
        smallest = smallest.substr(nonZeroIndex);

        // Edge Case 3: If the string is empty after stripping zeros, return "0"
        return smallest.empty() ? "0" : smallest;
    }
};