class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, end = 0;
        // iterate through string s
        int slen = s.length();
        if(slen < 1) return "";
        int lensolo, lenboth;
        for(int i = 0; i < slen; ++i){
            lensolo = expandfromCenter(s, i, i);
            lenboth = expandfromCenter(s, i, i+1);
            // check which one is larger
            if(max(lensolo, lenboth) < end-start+1) continue;
            if(lensolo > lenboth){
                start = i-lensolo/2;
                end = i+lensolo/2;
            } else {
                start = i-lenboth/2+1;
                end = i+lenboth/2;
            }
        }
        return s.substr(start, end-start+1);
    }
    
private:
    int expandfromCenter(string s, int left, int right){
        int len = s.length();
        // check if left and right index are in the range of s
        // and if s[left] is the same as s[right]
        while(left >= 0 && right < len && s[left]==s[right]){
            --left;
            ++right;
        }
        // return the length between left and right (both chars included)
        return right-left-1;
    }
};
