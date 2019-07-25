class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator ip;
        ip = unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), ip));
        return nums.size();
    }
};
