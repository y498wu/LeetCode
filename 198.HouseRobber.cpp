class Solution {
public:
    int rob(vector<int>& nums) {
        int len = nums.size();
        // basic conditions
        if(len == 0) return 0;
        if(len == 1) return nums[0];
        // new vector to record the ans, just like memo
        vector<int> ans(len);
        ans[0] = nums[0];
        ans[1] = max(nums[0], nums[1]);
        // iterate through the rest of nums
        for(int i = 2; i < len; ++i){
            ans[i] = max(ans[i-2]+nums[i], ans[i-1]);
        }
        return ans[len-1];
    }
};
