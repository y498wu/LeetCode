class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(m == 0) return 0;
        int n = matrix[0].size();
        vector<vector<int>> ans(m+1, vector<int>(n+1, 0));
        int anslen = 0;
        for(int i = 1; i <= m; ++i){
            for(int j = 1; j <= n; ++j){
                if(matrix[i-1][j-1] == '1'){
                    ans[i][j] = 1 + min(ans[i-1][j-1], min(ans[i][j-1], ans[i-1][j]));
                    anslen = max(anslen, ans[i][j]);
                }
            }
        }
        return anslen*anslen;
    }
};
