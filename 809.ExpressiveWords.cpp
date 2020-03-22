class Solution {
private:
    string getBase(string s){
        int slen = s.size();
        if(slen == 1) return s;
        string ans;
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
    
    bool compare(string base, string word){
        //cout << "base: " << base << " word: " << word << endl;
        int i = 0, j = 0;
        int blen = base.size();
        int wlen = word.size();
        while(i < blen && j < wlen){
            if (base[i] == word[j] && i+1 < blen && j+1 < wlen && base[i+1] == word[j+1]){
                i++;
                j++;
            } else if (base[i] == word[j]){
                j++;
            } else if (i+1 < blen && base[i+1] == word[j]){
                i++;
            } else {
                return false;
            }
        } 
        //cout << "i: " << i << "j: " << j << endl;
        if(i == blen-1 && j == wlen){
            return true;
        } else {
            return false;
        }
    }
public:
    int expressiveWords(string S, vector<string>& words) {
        // edge case when S is empty
        if(S.size() == 0) return words.size();
        // get the standard string
        string base = getBase(S);
        //cout << "base: " << base << endl;
        // iterate through words
        int count = 0;
        for(int i = 0; i < words.size(); ++i){
            if(compare(base, words[i])) count++;
        }
        return count;
    }
};
