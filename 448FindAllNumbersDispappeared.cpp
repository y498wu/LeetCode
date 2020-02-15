class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // turn the index's number as negative if index+1 exists in the vector
        for(int i = 0; i < nums.size(); i++){
            if(nums[abs(nums[i]) - 1] > 0)
                nums[abs(nums[i]) - 1] *= -1;
        }
        // if the index's number is positive, it means that index+1 never appears
        // then push index+1 to the answer vector
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0)
                ans.push_back(i+1);
        }
        return ans;
    }
};
