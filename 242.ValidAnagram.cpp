class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int slen = s.length();
        int checks[26] = {0};
        for(int i = 0; i < slen; i++){
            checks[s[i]-'a']++;
            checks[t[i]-'a']--;
        }
        for(int i = 0; i < 26; ++i){
            if(checks[i]) return false;
        }
        return true;
    }
};
