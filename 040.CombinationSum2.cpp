class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> combination;
        helper(candidates, target, res, combination, 0);
        return res;
    }
private:
    void helper(vector<int>& candidates, int target, vector<vector<int>>& res, vector<int>& combination, int index){
        if(target == 0){
            res.push_back(combination);
            return;
        }
        for(int i = index; i < candidates.size() && target >= candidates[i]; ++i){
            if(i == index || candidates[i] != candidates[i-1]){
                combination.push_back(candidates[i]);
                helper(candidates, target-candidates[i], res, combination, i+1);
                combination.pop_back();
            }
        }
    }
};
