class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> cur = {s[0]};
        for(char& origi : s){
            for(char curChar : cur){
                if (origi == curChar){
                    break;
                } else {
                    cur.emplace_back(origi);
                }
            }
        }
        return cur.size();
    }
};
