class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1, 0);
        int tominus = 1;
        for(int i = 1; i <= num; ++i){
            if(tominus*2 == i) tominus *= 2;
            ans[i] = ans[i-tominus] + 1;
        }
        return ans;
    }
};
