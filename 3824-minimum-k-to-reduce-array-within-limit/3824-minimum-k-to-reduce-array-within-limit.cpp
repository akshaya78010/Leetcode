class Solution {
public:
    int nonPositive(vector<int>&nums,int k){
        int county = 0;

        for(int i =0; i < nums.size() ; i++){
            if(nums[i]%k == 0){
                county += nums[i]/k;
            }
            else if(nums[i]%k != 0){
                county += ((nums[i]/k) + 1);
            }
        }

        return county;
    }
    int minimumK(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        
        int low = 1;
        int high = 1e5;
        int mid;
        int res = high;
        while(low <= high){
            mid = (low + (high - low)/2);
            if(1LL*nonPositive(nums,mid) <= (1LL  * mid * mid)){
                res = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }

        return res;
    }
};