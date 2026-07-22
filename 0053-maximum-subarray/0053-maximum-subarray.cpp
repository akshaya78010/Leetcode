class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //find sum += nums[i];
        //when sum become -ve 
        //start sum from nums[i];

        int n = nums.size();
        int sumi = 0;
        int maxi = nums[0];
        for(int i = 0 ; i < n ; i++){
            sumi += nums[i];
            maxi = max(sumi,maxi);
            if(sumi < 0){
                maxi = max(sumi,maxi);
                sumi = 0;
            }
            // cout<<sumi<<" "; 
        }
        return maxi;
    }
};