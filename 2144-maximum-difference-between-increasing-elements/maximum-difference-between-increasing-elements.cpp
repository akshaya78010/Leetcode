class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi = -1;
        int diff =0 ;
        for(int i =0 ; i < nums.size()-1; i++)
        {
           for(int j = i ; j < nums.size() ; j++)
           {
            if(nums[i] < nums[j])
            {
                maxi = max(maxi,nums[j] - nums[i]);
            }
           }
        }
        return maxi;
    }
};