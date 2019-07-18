class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        if(m == 0 || triangle[0].size() == 0) return 0;
        int minsofar = triangle[0][0];
        for(int i = 1; i < m; ++i){
            int smallest = INT_MAX;
            for(int j = 0; j < triangle[i].size(); ++j){
                smallest = min(smallest, triangle[i][j]);
            }
            minsofar += smallest;
        }
        return minsofar;
    }
};
