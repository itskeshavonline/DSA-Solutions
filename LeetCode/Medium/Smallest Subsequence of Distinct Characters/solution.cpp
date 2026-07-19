class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> lastIndex(26, 0);
        for (int i = 0; i < s.length(); i++) {
            lastIndex[s[i] - 'a'] = i;
        }
        
        vector<bool> isVisited(26, false);
        string resultStack = "";
        
        for (int i = 0; i < s.length(); i++) {
            char currChar = s[i];
            
            if (isVisited[currChar - 'a']) {
                continue;
            }
            
            while (!resultStack.empty() && resultStack.back() > currChar && lastIndex[resultStack.back() - 'a'] > i) {
                isVisited[resultStack.back() - 'a'] = false;
                resultStack.pop_back();
            }
            
            resultStack.push_back(currChar);
            isVisited[currChar - 'a'] = true;
        }
        
        return resultStack;
    }
};