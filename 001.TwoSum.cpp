class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, n = nums.size();
        unordered_map<int, int> m;
        vector<int> ret;
        
        for (i = 0; i < n; ++i)
        {
            if (m.find(target - nums[i]) != m.end()) // which means key&value are found
            {
                ret.push_back(m[target - nums[i]]);
                ret.push_back(i);
                break;
            }
            m[nums[i]] = i;
        }
        
        return ret;
    }
};
