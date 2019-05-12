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
        for(int i = 0; i < s.length(); i++){
            // compare lenCompare and len
            printVec(cur);
            printVec(curCompare);
            cout << cur.size() << " " << curCompare.size() << endl;
            if(curCompare.size() > cur.size()){
                cur.clear();
                cur = curCompare;
            }
            if(curCompare.empty()){
                curCompare.emplace_back(s[i]);
            } else {
                for(int j = 0; j < cur.size(); ++j){
                    if(s[i] == cur[j]){
                        curCompare.clear();
                    }
                }
                curCompare.emplace_back(s[i]);
            }
        }
        return cur.size();
    }
};
