class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        if(!nums.size()) return ans;
        unordered_map<int, int> dict;
        for(auto num : nums)
            dict[num]++;
        vector<vector<int>> bucket(nums.size()+1);
        for(auto kv : dict)
            bucket[kv.second].push_back(kv.first);
        for(int i = bucket.size()-1; i >= 0; i--){
            for(int j = 0; j < bucket[i].size(); j++){
                ans.push_back(bucket[i][j]);
                if(ans.size() == k) return ans;
            }
        }
        return ans;
    }
};
