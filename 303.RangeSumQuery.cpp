class NumArray {
public:
    NumArray(vector<int>& nums) {
        ans.push_back(0);
        for(int num : nums)
            ans.push_back(ans.back() + num);
    }
    
    int sumRange(int i, int j) {
        return ans[j+1] - ans[i];
    }
private:
    vector<int> ans;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */

