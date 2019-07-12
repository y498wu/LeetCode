class Solution {
public:
    bool isPalindrome(string s) {
        // isalnum: Checks whether c is either a decimal digit or an uppercase or lowercase letter.
        // tolower:  The tolower() function converts ch to its lowercase version if it exists. 
        // If the lowercase version of a character does not exist, it remains unmodified. 
        int slen = s.length();
        int start = 0, end = slen-1;
        while(start < end){
            if(!isalnum(s[start])){
                ++start;
            } else if (!isalnum(s[end])){
                --end;
            } else if (tolower(s[start]) != tolower(s[end])){
                return false;
            } else {
                ++start;
                --end;
            }
        }
        return true;
    }
};
