class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int plen = prices.size();
        if(plen < 2) return 0;
        vector<int> ans (2, 0);
        int start = prices[0];
        for(int i = 1; i < plen; ++i){
            if(prices[i] > start && i+1 < plen && prices[i+1] < prices[i]){
                ans.push_back(prices[i] - start);
                start = INT_MAX;
            } else if (prices[i] > start && i+1 == plen){
                // the case of last digit in the vector
                ans.push_back(prices[i] - start);
            } else {
                start = min(start, prices[i]);
            }
        }
        for(int a : ans) cout << a;
        sort(ans.begin(), ans.end());
        return ans[ans.size()-1] + ans[ans.size()-2];
    }
};
