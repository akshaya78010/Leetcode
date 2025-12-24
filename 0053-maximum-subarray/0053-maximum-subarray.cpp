class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sumi = 0;
        int maxi = INT_MIN;
        for(int i =0; i < nums.size() ; i++){
            sumi += nums[i];

            if(maxi < sumi){
                maxi = sumi;
            }

            if(sumi < 0){
                sumi = 0;
            }
        }

        return maxi;
    }
};