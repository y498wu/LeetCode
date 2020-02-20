class Solution {
public:
    bool isValid(string s) {
        vector<char> check;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                check.push_back(s[i]);
            } else if (!check.empty() && ((s[i] == ')' && check.back() == '(') || (s[i] == '}' && check.back() == '{') || (s[i] == ']' && check.back() == '['))){
                check.pop_back();
            } else {
                return false;
            }
        }
        if(check.empty()){
            return true;
        } else{
            return false;
        }
    }
};
