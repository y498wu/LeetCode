class Solution {
public:
    bool isMatch(string s, string p) {
        int slen = s.length();
        int plen = p.length();
        int i = 0, j = 0;
        //cout << plen << endl;
        while(1){
            if(i >= slen && j < plen) return false;
            if(i < slen && j >= plen) return false;
            char first = s[i];
            char second = p[j];
            char curr;
            // the most correct case: first == second
            if(first == second){
                cout << "1" << endl;
                cout << i << "and" << j << endl;
                if(i == slen-1 && j == plen-1) return true;
                curr = second;
                ++i;
                ++j;
            } else if (second == '.' && j+1 < plen && p[j+1] == '*'){
                cout << "2" << endl;
                cout << i << "and" << j << endl;
                if(j+1 == plen-1){
                    return true;
                } else {
                    bool found = false;
                    for(int k = i; k < slen; ++k){
                        cout << "here" << endl;
                        if(p[j+2] == s[k]){
                            i = k;
                            j = j+2;
                            found = true;
                            break;
                        }
                    }
                    if(!found){
                        return false;
                    } else {
                        continue;
                    }
                }
            } else if (second == '.'){
                cout << "3" << endl;
                cout << i << "and" << j << endl;
                // the case when second == '.'
                // then skip this char
                if(i == slen-1 && j == plen-1) return true;
                ++i;
                ++j;
            } else if (first != second && j+1 < plen && p[j+1] == '*'){
                cout << "4" << endl;
                // the case like example 4: first is a, 
                // second is c* which could be blank
                //cout << i << "and" << j << endl;
                j += 2;
            } else if (second == '*' && first == curr){
                cout << "5" << endl;
                // the case such as example 2: first is aa
                // second is a*
                cout << i << "and" << j << endl;
                if(i == slen-1 && j == plen-1) return true;
                ++j;
            } else {
                cout << "6" << endl;
                return false;
            }
        }
        return true;
    }
};
