class Solution {
public:
    bool isUnique(string s, int lower, int upper){
        // for(int k = lower; k <= upper; ++k){
        //     cout << s[k];
        // }
        // cout << endl;
        if (lower == upper) return true;
        for(int i = lower; i < upper; ++i){
            for(int j = i+1; j <= upper; ++j){
                // cout << i << j << endl;
                if(s[i] == s[j]) return false;
            }
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int len = s.length();
        if(len == 1) return 1;
        for(int i = 0; i < len-1; ++i){
            for(int j = i; j < len; ++j){
                // cout << isUnique(s, i, j) << s[i] << s[j] << j-i << endl; 
                // cout << i << j << endl;
                if(isUnique(s, i, j)) ans = max(ans, j-i+1);
            }
        }
        return ans;
    }
};
