class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows = grid.size();
        int cols = grid[0].size();
        int total = rows*cols;

        k = k%total;

        vector<vector<int>> ans(rows,vector<int>(cols));

        for(int row =0;row<rows;row++){
            for(int col= 0;col<cols;col++){
                int oldIdx = row*cols+ col;
                int newIdx = (oldIdx+k)%total;

                int newRow = newIdx /cols;
                int newCol = newIdx%cols;

                ans[newRow][newCol] = grid[row][col];
            }
        }

        return ans;
    }
};