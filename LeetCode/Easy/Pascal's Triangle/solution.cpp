class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;

        for (int i=0; i<numRows; i++) {
            vector<int> temp;
            for(int j=0; j<i+1; j++) {
                if (j == 0 || j == i) {
                    temp.push_back(1);
                } else if (i > 0) {
                    temp.push_back(tri[i-1][j-1] + tri[i-1][j]);
                }
            }
            tri.push_back(temp);
        }

        return tri;
    }
};