class Solution {
public:
    int climbStairs(int n) {
       vector<int>dp(47,0);
       dp[0] = 0;
       dp[1] = 1;
       dp[2] = 2;
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else if(n== 2)
    {
        return 2;
    }

       for(int i = 3 ; i <= n ; i++)
       {
          dp[i] = dp[i-1] + dp[i-2];
       }

       return dp[n];
    }
};