class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int dlen = digits.size();
        int plusone = 1;
        for(int i = dlen-1; i > 0; i--){
            if(plusone && digits[i] == 9){
                digits[i-1]++;
                digits[i] = 0;
            } else if (plusone) {
                digits[i]++;
                plusone = 0;
            } else {
                break;
            }
        }
        if(digits[0] == 10){
            digits[0] = 1;
            for(int i = 1; i < dlen; i++)
                digits[i] == 0;
            digits.push_back(0);
        } else if (plusone){
            digits[0]++;
        }
        return digits;
    }
};
