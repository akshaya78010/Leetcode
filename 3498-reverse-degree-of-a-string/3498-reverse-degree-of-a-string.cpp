class Solution {
public:
    int reverseDegree(string s) {
        
        unordered_map<char,int>mpp;

        int x = 26;
        for(char i = 'a' ; i <= 'z' ; i++){
            mpp[i] = x;
            x-=1;
        }

        int sumi = 0;
        for(int i = 0; i < s.size() ; i++){
            sumi += (mpp[s[i]] * (i+1));
        }

        return sumi;
    }
};