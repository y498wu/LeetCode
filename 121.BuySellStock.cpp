class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int max_sub = 0;
        for(int i = 0; i < len-1; ++i){
            for(int j = i+1; j < len; ++j){
                max_sub = max(max_sub, prices[j]-prices[i]);
            }
        }
        return max_sub;
    }
};
