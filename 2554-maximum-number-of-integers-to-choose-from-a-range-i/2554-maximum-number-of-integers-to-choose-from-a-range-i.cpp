class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        map<int,int>mpp;

        for(int i =0; i < banned.size() ; i++){
            mpp[banned[i]]++;
        }

        int sumi = 0;
        int county = 0;
        for(int i = 1 ; i <= n ; i++){
            if(mpp[i] <= 0){
                if((sumi + i) <= maxSum){
                    sumi += i;
                    county += 1;
                }
            }
        }

        return county;
    }
};