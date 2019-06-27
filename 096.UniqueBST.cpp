class Solution {
public:
    int numTrees(int n) {
        if(n == 1) return 1;
        int ans = 0;
        for(int i = n-1; i >= n/2; --i){
            ans += i;
        }
        ans *= 2;
        if(n%2 == 1) ans -= n/2;
        return ans;
    }
};
