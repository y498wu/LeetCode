class Solution {
public:
    int myAtoi(string str) {
        int slen = str.length();
        int ans = 0;
        bool isPos = true;
        bool charOnly = false;
        for(int i = 0; i < slen; ++i){
            if(isPos == false && ans > 0) ans = 0 - ans;
            char c = str[i];
            int digit = (int)c - (int)'0';
            if(charOnly && !(digit >= 0 && digit <= 9)) break;
            if(c == ' '){
                continue;
            } else if (c == '+'){
                charOnly = true;
            } else if (c == '-'){
                charOnly = true;
                isPos = false;
            } else if (digit >= 0 && digit <= 9){
                if(ans > INT_MAX/10 || (ans == INT_MAX/10 && digit > 7)) return INT_MAX;
                if(ans < INT_MIN/10 || (ans == INT_MIN/10 && digit > 8)) return INT_MIN;
                if(ans < 0){
                    ans = ans*10 - digit;
                } else {
                    ans = ans*10 + digit;
                }
                charOnly = true;
            } else {
                break;
            }
            cout << c << "and" << ans << endl;
        }
        if(isPos == false && ans > 0) ans = 0 - ans;
        return ans;
    }
};
