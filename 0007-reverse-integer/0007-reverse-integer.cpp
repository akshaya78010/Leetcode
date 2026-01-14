class Solution {
public:
    int reverse(int x) {
        cout<<x<<'\n';
        long long int r;
        long long int res = 0;
        while(x)
        {
           r = x%10;
           res = res * 10+r;
           x = x/10;
        }
        //this is for checking 
        cout<<res<<'\n';
        if(res > 2147483647 || res < -2147483647)
        {
            return 0;
        }
        return res;
        //This is done for the commit 
    }
};
