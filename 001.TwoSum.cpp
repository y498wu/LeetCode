class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // get nums's length
        int len = nums.size();
        // create mapping dictionary and answer vector
        unordered_map<int, int> dict;
        vector<int> ans;
        // iterate through nums
        for(int i = 0; i < len; ++i){
            // iterate through dict
            if(dict.find(target-nums[i]) != dict.end()){
                // if (target-key) is found in dict, return answer
                // key: nums[i]
                // value: i
                ans.emplace_back(dict[target-nums[i]]);
                ans.emplace_back(i);
                break;
            }
            dict[nums[i]] = i;
        }
        return ans;
    }
};
