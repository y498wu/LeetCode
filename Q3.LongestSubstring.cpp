class Solution {
public:
    void printVec(vector<char> &vec){
        for(int i = 0; i < vec.size(); ++i){
            cout << vec.at(i);
        }
        cout << endl;
    }
    int lengthOfLongestSubstring(string s) {
        // store the current maximum substring in vector
        vector<char> cur;
        // store the possible substring to be compared with cur
        vector<char> curCompare;
        int len = 0;
        for(int k = 0; k < s.length(); k++){
        for(int i = k; i < s.length(); i++){
            if(curCompare.empty()){
                curCompare.emplace_back(s[i]);
            } else {
                for(int j = 0; j < cur.size(); ++j){
                    if(s[i] == curCompare[j]){
                        curCompare.clear();
                    }
                }
                curCompare.emplace_back(s[i]);
            }
            // compare lenCompare and len
            if(curCompare.size() >= cur.size()){
                cur.clear();
                cur = curCompare;
            }
            //printVec(cur);
            //printVec(curCompare);
            //cout << cur.size() << " " << curCompare.size() << endl;
        }
            if(cur.size() > len) len = cur.size();
            cur.clear();
            curCompare.clear();
        }
        return len;
    }
};
