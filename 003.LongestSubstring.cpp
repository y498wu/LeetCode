class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // create a character dictionary
        vector<int> dict (256, -1);
        int len = s.length();
        int maxlen = 0;
        int start = -1;
        // iterate through string s
        int charPos = 0;
        for(int i = 0; i < len; ++i){
            charPos = (int)s[i];
            // consider the case when we get a repetitive char
            if(dict[charPos] > start){
                // replace start pos with the last pos that this char shows up
                start = dict[charPos];
            }
            // replace the char's corresponding stored pos with i
            dict[charPos] = i;
            // update maxlen if the length of chars from start(not included) to i(included)
            // is larger than the original maxlen
            maxlen = max(maxlen, i-start);
        }
        return maxlen;
    }
};
