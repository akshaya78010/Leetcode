class Solution {
public:
    string frequencySort(string s) {
     map<char,int>mpp;
     for(int i =0; i < s.size() ; i++)
     {
        mpp[s[i]]+=1;
     }   
    sort(s.begin(),s.end(),[&mpp](const char &a,const char &b)
    {
        if(mpp[a] == mpp[b]) return a < b;
        return mpp[a] > mpp[b];
    });
    return s;
    }
};