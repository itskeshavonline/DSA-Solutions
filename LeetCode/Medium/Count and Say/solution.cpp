class Solution {
    vector<int> res;
    vector<int> input; 
public:
    void counter(int start, int n) {
        if (start == n + 1) {
            return;
        }
        
        // 1. Copy previous result and clear 'res' for the new generation
        input = res;
        res.clear(); 
        
        // 2. Initialize tracking variables using the first element
        int count = 1;
        int var = input[0]; 
        
        // 3. Loop up to input.size(), starting from index 1
        for (int i = 1; i < input.size(); i++) {
            if (input[i] == var) {
                count++;
            } else {
                res.push_back(count);
                res.push_back(var);
                var = input[i];
                count = 1;
            }
        }
        
        // 4. Push the final group after the loop finishes
        res.push_back(count);
        res.push_back(var);
        
        // Move to the next step
        counter(start + 1, n);
    }

    string countAndSay(int n) {
        if (n == 1) return "1";
        
        // Initialize the base case for step 1
        res = {1}; 
        counter(2, n);
        
        string s;
        for(int x : res) {
            s += to_string(x);
        }
        return s;
    }
};