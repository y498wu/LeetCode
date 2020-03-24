class Solution {
public:
    string getHint(string secret, string guess) {
        // edge case
        int slen = secret.size(), glen = guess.size();
        if(slen != glen || slen == 0) return "0A0B";
        // start
        int aans = 0, bans = 0;
        vector<int> acount(10, 0);
        vector<int> bcount(10, 0);
        // go through secret and guess
        char s, g;
        for(int i = 0; i < slen; ++i){
            s = secret[i], g = guess[i];
            if(s == g){
                ++aans;
            } else {
                ++acount[s-'0'];
                ++bcount[g-'0'];
            }
        }
        // go through two vectors
        for(int i = 0; i < 10; ++i){
            bans += min(acount[i], bcount[i]);
        }
        string ans = to_string(aans) + "A" + to_string(bans) + "B";
        return ans;
    }
};
