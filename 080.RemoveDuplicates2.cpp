class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        if(s == 0) return 0;
        int var = nums[0], count = 0, gcount = 0;
        for(int i = 0; i < s-gcount; ){
            if(nums[i] != var){
                var = nums[i];
                count = 1;
                ++i;
            } else if (count >= 2){
                nums.erase(nums.begin()+i);
                ++count;
                ++gcount;
            } else {
                ++count;
                ++i;
            }
        }
        return s-gcount;
    }
};
