class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int pos = 1;
        string one = "I";
        string five = "V";
        string ten = "X";
        while(num != 0){
            if(pos == 2){
                one = "X";
                five = "L";
                ten = "C";
            } else if (pos == 3){
                one = "C";
                five = "D";
                ten = "M";
            } else if (pos == 4){
                one = "M";
            }
            int digit = num%10;
            string oneDigit = "";
            if(digit == 1) oneDigit = one;
            if(digit == 2) oneDigit = one + one;
            if(digit == 3) oneDigit = one + one + one;
            if(digit == 4) oneDigit = one + five;
            if(digit == 5) oneDigit = five;
            if(digit == 6) oneDigit = five + one;
            if(digit == 7) oneDigit = five + one + one;
            if(digit == 8) oneDigit = five + one + one + one;
            if(digit == 9) oneDigit = one + ten; 
            ans = oneDigit + ans;
            num /= 10;
            ++pos;
        } 
        return ans;
    }
};
