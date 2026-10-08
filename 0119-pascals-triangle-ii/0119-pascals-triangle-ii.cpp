class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>>res;
        int n = res.size();

        while(n < rowIndex + 1){
            if(n == 0){
                res.push_back({1});
            }
            else if(n == 1){
               res.push_back({1,1});
            }
            else{
                vector<int>temp;  
                temp.push_back(res[n-1][0]);

                for(int i = 1 ; i < res[n-1].size() ; i++){
                    temp.push_back(res[n-1][i-1] + res[n-1][i]);
                }

                temp.push_back(res[n-1][res[n-1].size() - 1]);

                res.push_back(temp);
            }
            n+=1;
        }

        return res[res.size() - 1];
    }
};