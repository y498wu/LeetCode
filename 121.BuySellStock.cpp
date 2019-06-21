class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int ans = 0, start = prices[0];
        int len = prices.size();
        for(int i = 0; i < len; ++i){
            int sub = prices[i]-start;
            if(prices[i] < start){
                start = prices[i];
            } else {
                ans = max(ans, sub);
            }
        }
        return ans;
    }
};
