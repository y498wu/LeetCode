class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] != nums[i+1]){
                k--;
                ans.push_back(nums[i+1]);
            }
            if(k == 1) break;
        }
        return ans;
    }
};
