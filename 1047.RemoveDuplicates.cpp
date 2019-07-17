class Solution {
public:
    string removeDuplicates(string S) {
        int slen = S.length();
        if(slen < 2) return S;
        string ans;
        ans.push_back(S[0]);
        for(int i = 1; i < slen; ++i){
            if(S[i] == ans.back()){
                ans.pop_back();
            } else {
                ans.push_back(S[i]);
            }
        }
        return ans;
    }
};
