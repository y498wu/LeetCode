class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int tlen = T.size(), count;
        for(int i = 0; i < tlen; i++){
            count = 0;
            for(int j = i+1; j < tlen; j++){
                if(T[j] > T[i]){
                    count = j-i;
                    break;
                }
            }
            T[i] = count;
        }
        return T;
    }
};
