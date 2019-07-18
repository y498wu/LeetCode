class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        if(m == 0 || triangle[0].size() == 0) return 0;
        int minsofar = triangle[0][0];
        int index = 0;
        for(int i = 1; i < m; ++i){
            if(triangle[i][index] < triangle[i][index+1]){
                minsofar += triangle[i][index];
            } else {
                minsofar += triangle[i][index+1];
                index++;
            }
        }
        return minsofar;
    }
};
