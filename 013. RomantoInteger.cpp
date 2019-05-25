//Only when a smaller roman numeral appears before a bigger roman numeral (an inverse) in the string, the smaller one should be deducted.   

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int len = s.length();
        int map[256];
        map['I']=1;map['V']=5;map['X']=10;map['L']=50;map['C']=100;map['D']=500;map['M']=1000;
        for(int i=0;i<len;i++){
            if(i+1<len && map[s[i]]<map[s[i+1]]) ans-=map[s[i]];
            else ans+=map[s[i]];
        }
        return ans;
    }
};
