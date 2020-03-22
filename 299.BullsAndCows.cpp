class Solution {
public:
    string getHint(string secret, string guess) {
        string s, g;
        int bulls = 0, cows = 0;
        for(int i = 0; i < secret.size(); ++i){
            if(secret[i] == guess[i]){
                bulls++;
            } else {
                s += secret[i];
                g += guess[i];
            }
        }
        //cout << "s: " << s << " g: " << g << endl;
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < g.size(); j++){
                if(s[i] == g[j]){
                    cows++;
                    break;
                }
            }
        }
        stringstream test;
        test << bulls;
        string bullstr = test.str();
        stringstream test2;
        test2 << cows;
        string cowstr = test2.str();
        string ans;
        ans += bullstr;
        ans += "A";
        ans += cowstr;
        ans += "B";
        return ans;
    }
};
