class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<string,int>mpp;

        for(int i = 0 ; i <= (int)s.size()-k ; i++){
            mpp[s.substr(i,k)]++;

            if(mpp.size() >= pow(2,k)) break;
        }


        return mpp.size() == pow(2,k);
    }
};

