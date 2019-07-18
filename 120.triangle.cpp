class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size(), rowsize, lastsize = 1;
        if(m == 0 || triangle[0].size() == 0) return 0;
        for(int i = 1; i < m; ++i){
            triangle[i][0] += triangle[i-1][0];
            rowsize = triangle[i].size();
            triangle[i][rowsize-1] += triangle[i-1][lastsize-1];
            lastsize = rowsize;
            if(rowsize == 2) continue;
            for(int j = 1; j < rowsize-1; ++j){
                triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
            }
        }
        int smallest = INT_MAX;
        for(int& item : triangle[m-1]) smallest = min(smallest, item);
        return smallest;
    }
};
