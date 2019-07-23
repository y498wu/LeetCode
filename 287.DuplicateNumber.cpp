class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> dict;
        for(auto num : nums)
            dict[num]++;
        for(auto check : dict)
            if(check.second >= 2) return check.first;
        return 0;
    }
};
