class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> row(n), col(n);
        int increase = 0;

        // find max of each row and column
        for(int i = 0; i < n; i++){
            int max1 = 0;
            int max2 = 0;
            for(int j = 0; j < n; j++){
                max1 = max(max1, grid[i][j]); 
                max2 = max(max2, grid[j][i]); 
            }
            row[i] = max1;
            col[i] = max2;
        }

        // calculate total increase
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                increase += min(row[i], col[j]) - grid[i][j];
            }
        }
        return increase;
    }
};
