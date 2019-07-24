class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int dlen = digits.size();
        for(int i = dlen-1; i >= 0; --i){
            if(digits[i] == 9){
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};
