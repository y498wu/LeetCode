class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> dict = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        if(digits.length() == 0) return ans;
        ans.push_back("");
        for(int i = 0; i < digits.length(); i++){
            ans = combine(dict[digits[i]-'0'], ans);
        }
        return ans;
    }
private:
    vector<string> combine(string toadd, vector<string> ans){
        vector<string> temp;
        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < toadd.length(); j++){
                temp.push_back(ans[i]+toadd[j]);
            }
        }
        return temp;
    }
};
