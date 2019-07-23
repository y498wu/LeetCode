class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // use XOR algorithm
        // 1 ^ 2 ^ 4 ^ 1 ^ 2 ^ 3 ^ 4 = 3
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            ans ^= nums[i];
        }
        return ans;
    }
};
