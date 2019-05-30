class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        // start from the most left and the most right
        int left = 0;
        int right = len-1;
        int maxContainer = 0;
        while(left != right){
            // get the max of current container and the original max
            maxContainer = max(maxContainer, (right-left)*min(height[left], height[right]));
            // move the shorter height
            if(height[left] < height[right]){
                ++left;
            } else {
                --right;
            }
        }
        return maxContainer;
    }
};
