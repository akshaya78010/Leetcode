class Solution {
public:
    int longestBalanced(string s) {

        map<char,int>mpp;
        int temp = 0;
        int maxi = INT_MIN;
        bool flag = true;
        for(int i =0; i < s.size() ; i++){
            mpp.clear();
            for(int j = i ; j < s.size() ; j++){
                mpp[s[j]] += 1;

                 temp = mpp.begin()->second;
                 flag = true;
                //   cout<<"i :"<<i<<" j :"<<j<<'\n';
                 for(auto it  = mpp.begin() ; it != mpp.end() ; it++){
                    // cout<<"temp :"<<temp<<" it->first :"<<it->first<<" it->second :"<<it->second<<'\n';
                    if(temp != it->second){
                        flag = false;
                        break;
                    }
                 }   
                //  cout<<'\n';

                 if(flag){
                   
                    
                    maxi = max(maxi,j-i+1);
                 }
                
            }
        }

        return maxi;
    }
};