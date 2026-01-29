class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();
        map<int,int>mpp;
        int county = 0;
        int k = goal;

        mpp[0]++;

        for(int i = 1 ; i < nums.size() ; i++){
            nums[i] = nums[i-1] + nums[i];
        }

        for(int i =0; i < n ; i++){
            if(mpp[nums[i] - k] > 0){
                county += mpp[nums[i] - k];
            }
            mpp[nums[i]]++;
        }

        return county;
    }
};