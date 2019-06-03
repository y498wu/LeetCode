class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        string s = to_string(x);
        cout << s << endl;
        int slen = s.length();
        for(int i = 0; i < slen/2; ++i){
            if(s[i] != s[slen-i-1]) return false;
        }
        return true;
    }
};
