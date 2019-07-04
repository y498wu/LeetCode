class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(m == 0) return 0;
        int n = matrix[0].size();
        int ans = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(matrix[i][j] == '1'){
                    ans = max(ans, tryhelper(i, j, m, n, matrix));
                }
            }
        }
        return ans;
    }
    
    int tryhelper(int i, int j, int m, int n, vector<vector<char>>& matrix){
        int k = 0;
        while(1){
            if(matrix[i][j+k] != '1' || i+k >= m-1 || j+k >= n-1) break;
            else ++k;
        }
        if(k == 0) return 1;
        
        int ans = 1;
        while(k >= 1){
            bool isallone = true;
            for(int a = 0; a <= k; ++a){
                for(int b = 0; b <= k; ++b){
                    if(matrix[i+a][j+b] == '0') isallone = false;
                }
            }
            if(isallone == false){
                --k;
            } else {
                ans = (k+1)*(k+1);
                break;
            }
        }
        cout << "i is " << i << " and j is " << j;
        cout << " and k is " << k << endl;
        return ans;
    }
};
