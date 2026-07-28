class Solution {
public:
    string smallestPalindrome(string s) {
        int mid = s.size()/2;
        sort(s.begin(), s.begin() + mid);
        if(s.size()%2 == 1){
            mid = mid +1;
        }
        sort(s.begin() + mid, s.end(), greater<char>());

        return s;
    }
};