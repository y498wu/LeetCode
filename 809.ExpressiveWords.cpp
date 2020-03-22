class Solution {
private:
    string getBase(string s){
        int slen = s.size();
        if(slen == 1) return s;
        string ans;
        ans += s[0];
        int count = 1;
        for(int i = 1; i < slen; ++i){
            if(s[i] == s[i-1]){
                count++;
            } else if (count == 2) {
                ans += s[i-1];
                ans += s[i-1];
                count = 1;
            } else {
                ans += s[i-1];
                count = 1;
            }
        }
        if(count == 2){
            ans += s[slen-1];
            ans += s[slen-1];
        } else {
            ans += s[slen-1];
        }
        return ans;
    }
public:
    int expressiveWords(string S, vector<string>& words) {
        // edge case when S is empty
        if(S.size() == 0) return words.size();
        // get the standard string
        string base = getBase(S);
        // iterate through words
        int count = 0;
        for(int i = 0; i < words.size(); ++i){
            string wordBase = getBase(words[i]);
            if(wordBase == base) count++;
        }
        return count;
    }
};
