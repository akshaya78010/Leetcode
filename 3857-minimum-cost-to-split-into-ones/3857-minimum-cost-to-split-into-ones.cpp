class Solution {
public:
    int minCost(int n) {
        int a = n-1;
        int b = 1;

        int mini = INT_MAX;
        int res = 0;
        while(n){
            a = n-1;
            b =1;
            res += a*b;
            n-=1;
        }   

        return res;
    }
};