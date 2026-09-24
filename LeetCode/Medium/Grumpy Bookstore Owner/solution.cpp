class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int satisfied = 0;

        for (int i = 0; i < n; i++) {
            if (grumpy[i] == 0) {
                satisfied += customers[i];
            }
        }

        int currentExtra = 0;
        int maxExtra = 0;

        // Extra satisfied customers for the first window
        for (int i = 0; i < minutes; i++) {
            if (grumpy[i] == 1) {
                currentExtra += customers[i];
            }
        }
        maxExtra = currentExtra;

        // Slide the window across the rest of the array
        for (int i = minutes; i < n; i++) {
            if (grumpy[i] == 1) {
                currentExtra += customers[i];
            }

            if (grumpy[i - minutes] == 1) {
                currentExtra -= customers[i - minutes];
            }
            
            maxExtra = max(maxExtra, currentExtra);
        }

        return satisfied + maxExtra;
    }
};