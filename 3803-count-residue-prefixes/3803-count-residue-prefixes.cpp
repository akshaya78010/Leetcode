class Solution {
public:
    int residuePrefixes(string s) {
        
        map<char,int>mpp;
        int county = 0;
        for(int i =0; i < s.size() ; i++){
            mpp[s[i]] += 1;
            // cout<<s[i]<<'\n';
            // cout<<(i+1)%3<<" "<<mpp.size()<<'\n';
            if(((i+1)%3) == mpp.size()){
               county += 1;
            }
               
        }

        return county;
    }
};