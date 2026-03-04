class Solution {
public:
    int longestPalindrome(string s) {
        map<int,int>mpp;

        for(int i = 0 ; i < s.size() ; i++)
        {
            mpp[s[i]]+=1;
        }

        int county = 0;
        int maxi = 0;
        int flag = 0;
        for(auto it = mpp.begin() ; it != mpp.end() ; it++)
        {
           if(it->second%2 == 0)
           {
            county+=it->second;
           }
           else if(it->second %2 != 0)
           {
            county += (it->second - 1);
            flag = 1;
            // maxi = max(maxi,it->second);
           }
        }

        if(flag == 1){
        county += 1;
        }
        return county;
    }
};