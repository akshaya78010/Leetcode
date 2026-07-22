class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int n = nums.size();

        for(int i = 0; i < n ; i++){
            if(nums[i] == 0){
                nums[i] = -1;
            }
        }

        map<int,int>mpp;
        int sumi = 0;
        int maxi = 0;
        mpp[0] = -1;
        for(int i =0 ; i < n ; i++){
            sumi += nums[i];

            if(mpp.find(sumi) != mpp.end()){
                maxi = max(maxi,i - mpp[sumi]);
            }
            
            if(mpp.find(sumi) == mpp.end()){
                mpp[sumi] = i;
            }
            else{
                mpp[sumi] = min(mpp[sumi],i);
            }
        }

        return maxi;
    }
};