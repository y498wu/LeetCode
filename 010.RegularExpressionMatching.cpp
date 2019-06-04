class Solution {
public:
    bool isMatch(string s, string p) {
        int slen = s.length();
        int plen = p.length();
        int i = 0, j = 0;
        while(1){
            if(i >= slen || j >= plen) return false;
            char first = s[i];
            char second = p[j];
            char curr;
            // the most correct case: first == second
            if(first == second){
                curr = second;
                ++i;
                ++j;
            } else if (second == '.' && j+1 < plen && p[j+1] == '*'){
                // the case when j encounters ".*" in p
                return true;
            } else if (second == '.'){
                // the case when second == '.'
                // then skip this char
                ++i;
                ++j;
            } else if (first != second && j+1 < plen && p[j+1] == '*'){
                // the case like example 4: first is a, 
                // second is c* which could be blank
                j += 2;
            } else if (second == '*' && first == curr){
                // the case such as example 2: first is aa
                // second is a*
                ++i;
            } else {
                return false;
            }
        }
        return true;
    }
};
