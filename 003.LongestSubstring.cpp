class Solution {
public:
    bool isUnique(string s, int start, int end){
        int len = s.length();
        for(int i = start; i < end; ++i){
            for(int j = i+1; j < end+1; ++j){
                if(s[i] == s[j]) return false;
            }
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int maxlen = 0;
        for(int i = 0; i < len; ++i){
            for(int j = i; j < len; ++j){
                if(!isUnique(s, i, j)){
                    break;
                } else {
                    maxlen = max(maxlen, j-i+1);
                }
            }
        }
        return maxlen;
    }
};
