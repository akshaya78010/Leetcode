class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int i = 0;
        int j = 0; 
        int n = s.size();

        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        map<char,int>mpp;
        int maxi = INT_MIN;
        int county = 0;
        char ch;
        while(j < n){

           if(!mpp[s[j]]){
            mpp[s[j]] += 1;
            j+=1;
            maxi = max(maxi ,j-i+1);
           }
           else{
             mpp[s[i]]-=1;
                i+=1;
           }
        }
        return maxi-1; 
    }
};