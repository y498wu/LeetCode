class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> dict;
        int nlen = nums.size();
        for(int i = 0; i < nlen; ++i){
            ++dict[nums[i]];
            if(dict[nums[i]] > nlen/2) return nums[i];
        }
        return 0;
    }
};
