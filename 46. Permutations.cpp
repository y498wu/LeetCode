class Solution {
public:
    // backtracking: finding solutions by trying partial solutions and then
    // abandoning them if they are not suitable
    // often implemented recursively
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permuteHelper(nums, 0, ans);
        return ans;
    }
private:
    // Explore decisions
    void permuteHelper(vector<int>& nums, int begin, vector<vector<int>>& ans){
        // If there are no more decisions to make: STOP
        if(begin >= nums.size()){
            ans.push_back(nums);
            return;
        }
        // Else: this call make a single decision
        // for each available choice c that we could make:
        for(int i = begin; i < nums.size(); i++){
            // choose c
            swap(nums[begin], nums[i]);
            // explore the remaining decisions
            permuteHelper(nums, begin+1, ans);
            // Un-choose c
            swap(nums[begin], nums[i]);
        }
    }
};
