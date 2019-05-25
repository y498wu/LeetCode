class Solution {
public:
    bool isValid(string s, int start, int end){
        int half = (end-start)/2;
        for(int i = 0; i <= half; ++i){
            if(s[start+i] != s[end-i]) return false;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int len = s.length();
        if (len == 1) return s;
        string ans;
        for(int i = 0; i < len-1; ++i){
            for(int j = i; j < len; ++j){
                string tmp = s.substr(i, (j-i+1));
                if(isValid(s, i, j) && tmp.length() > ans.length()){
                    cout << i << j;
                    ans = tmp;
                }
            }
        }
        return ans;
    }
};
