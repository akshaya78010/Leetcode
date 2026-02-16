class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {

     map<int,int>mpp;
     map<int,int>mpp1;
    int res = -1;
     for(int i =0; i < nums.size() ; i++){
        mpp[nums[i]] += 1;
     }   

     for(auto it = mpp.begin() ; it != mpp.end() ; it++){
        mpp1[it->second] += 1;
     }

        for(int i = 0; i < nums.size() ; i++){
            if(mpp1[mpp[nums[i]]] == 1){
                res = nums[i];
                break;
            }
        }

        return res;
    }
};