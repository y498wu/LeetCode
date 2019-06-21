class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int ans = 0, start = INT_MAX;
        int len = prices.size();
        for(int i = 0; i < len; ++i){
            ans = max(ans, prices[i]-start);
            start = min(start, prices[i]);
        }
        return ans;
    }
};
