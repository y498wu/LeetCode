class Solution {
public:
    string longestPalindrome(string s) {
        int slen = s.length();
        int max_s = 0, max_l = 0;
        int start = 0, end = 0;
        for(int i = 0; i < slen;){
            // make start and end equal to i
            start = i, end = i;
            // check if the core centre are same characters
            while(end+1 < slen && s[end]==s[end+1]){
                ++end;
            }
            i = end+1;
            // expand from centre if applicable
            while(start-1 >= 0 && end+1 < slen && s[start-1] == s[end+1]){
                --start;
                ++end;
            }
            // compare current length to max_l
            if(end-start+1 > max_l){
                max_l = end-start+1;
                max_s = start;
            }
        }
        return s.substr(max_s, max_l);
    }
};
