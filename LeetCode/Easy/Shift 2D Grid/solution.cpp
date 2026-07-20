class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rowCount = grid.size();
        int colCount = grid[0].size();
        int totalElements = rowCount * colCount;
        
        // Prevent unnecessary full rotations
        k = k % totalElements; 

        // Result grid initialized with same dimensions
        vector<vector<int>> resultGrid(rowCount, vector<int>(colCount));

        for (int r = 0; r < rowCount; r++) {
            for (int c = 0; c < colCount; c++) {
                // 1. Convert 2D coordinates (r, c) to 1D index
                int oldIndex = r * colCount + c;
                
                // 2. Calculate new 1D index after shifting k positions
                int newIndex = (oldIndex + k) % totalElements;
                
                // 3. Convert new 1D index back to 2D coordinates
                int newRow = newIndex / colCount;
                int newCol = newIndex % colCount;
                
                // 4. Place element in result grid
                resultGrid[newRow][newCol] = grid[r][c];
            }
        }

        return resultGrid;
    }
};