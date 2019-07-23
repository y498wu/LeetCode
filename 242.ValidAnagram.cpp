class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> counts;
        int slen = s.length();
        for(int i = 0; i < slen; i++){
            counts[s[i]]++;
            counts[t[i]]--;
        }
        for(auto count : counts)
            if(count.second) return false;
        return true;
    }
};
