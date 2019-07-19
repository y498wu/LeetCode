class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int plen = piles.size(), alex = 0, lee = 0;
        int first = 0, last = plen-1;
        bool alexturn = true;
        while(last >= first){
            if(alexturn && piles[first] > piles[last]){
                alex += piles[first];
                ++first;
            } else if (alexturn && piles[first] <= piles[last]){
                alex += piles[last];
                --last;
            } else if (!alexturn && piles[first] > piles[last]){
                lee += piles[first];
                ++first;
            } else if (!alexturn && piles[first] <= piles[last]){
                lee += piles[last];
                --last;
            }
            alexturn = !alexturn;
        }
        if(alex > lee){
            return true;
        } else{
            return false;
        }
    }
};
