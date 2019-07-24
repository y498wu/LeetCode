class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> checks;
        for(auto num : nums){
            if(checks.find(num) != checks.end()){
                return true;
            } else {
                checks.insert(num);
            }
        }
        return false;
    }
};
