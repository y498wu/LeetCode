class Solution {
public:
    bool isUgly(int num) {
        for(int i = 2; num && i < 6; i++){
            while(num % i == 0){
                num /= i;
            }
        }
        return num == 1;
    }
};
