class Solution {
public:
    int romanToInt(string s) {
        // create a char dictionary
        vector<int> dict (256, 0);
        dict['I'] = 1;
        dict['V'] = 5;
        dict['X'] = 10;
        dict['L'] = 50;
        dict['C'] = 100;
        dict['D']= 500;
        dict['M']= 1000;
        // iterate through string s
        int slen = s.length();
        int ans = 0;
        for(int i = 0; i < slen; ++i){
            // check if we get combo like IV or IX
            if(i+1 < slen && (dict[s[i+1]] == 5*dict[s[i]] || dict[s[i+1]] == 10*dict[s[i]])){
                ans += dict[s[i+1]];
                ans -= dict[s[i]];
                i++;
            } else {
                ans += dict[s[i]];
            }
        }
        return ans;
    }
};
