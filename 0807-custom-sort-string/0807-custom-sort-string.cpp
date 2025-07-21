class Solution {
public:
    string customSortString(string order, string s) {
       map<char,int>mpp;

       for(int i =0; i < order.size() ; i++)
       {
        mpp[order[i]] =i;
       } 

    sort(s.begin(),s.end(),[&mpp](char a,char b){
        return mpp[a] < mpp[b];
    });

   return s;
    }
};