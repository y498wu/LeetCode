class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        int dp0 = 0, dp1 = 0, dp2 = 0;
        for(int i = 2; i < len+1; ++i){
            dp2 = min(cost[i-2]+dp0, cost[i-1]+dp1);
            dp0 = dp1;
            dp1 = dp2;
        }
        return dp2;
    }
};
