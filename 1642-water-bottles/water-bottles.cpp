class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int full = numBottles;
        int empty = 0;
        int res = 0;
        while(full){
            res += full;
            empty += full;
            full = empty/numExchange;
            empty = empty%numExchange;
            cout<<full<<" "<<empty<<'\n';
        }

        return res;
    }
};