class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int test = 0;
        for(int i = 0; i < height.size() - 1; ++i){
            for(int j = i+1; j < height.size(); ++j){
                test = min(height[i], height[j]) * (j - i);
                if (test > ans) ans = test;
            }a
        }
        return ans;
    }
};