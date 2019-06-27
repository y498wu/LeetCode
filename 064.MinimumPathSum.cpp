class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        // get m and n
        int m = grid.size(), n = grid[0].size();
        // iterate thru the first row
        for(int i = 1; i < n; ++i){
            grid[0][i] += grid[0][i-1];
        }
        // iterate thru the first column
        for(int i = 1; i < m; ++i){
            grid[i][0] += grid[i-1][0];
        }
        for(int i = 1; i < m; ++i){
            for(int j = 1; j < n; ++j){
                grid[i][j] += min(grid[i][j-1], grid[i-1][j]);
            }
        }
        return grid[m-1][n-1];
    }
};
