class Solution {
public:
    unordered_map<int, int> dict;
    int climbStairs(int n) {
        int f = 0;
        if(dict.find(n) != dict.end()) return dict[n];
        if(n == 1){
            f = 1;
        } else if(n == 2){
            f = 2;
        } else {
            f = climbStairs(n-1) + climbStairs(n-2);
        }
        dict[n] = f;
        return f;
    }
};
