class Solution {
public:
    int titleToNumber(string s) {
        int slen = s.length(), ans = 0;
        for(int i = 0; i < slen; ++i){
            ans += (s[i]-'A'+1) * pow(26, slen-i-1);
        }
        return ans;
    }
};
