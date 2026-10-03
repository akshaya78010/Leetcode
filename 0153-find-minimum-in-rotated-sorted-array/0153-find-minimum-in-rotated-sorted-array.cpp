class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        int mini = INT_MAX;

        if(nums.size() == 1){
            return nums[0];
        }
        else if(nums.size() == 2){
            return min(nums[0],nums[1]);
        }


        while(low <= high){
            
            mid = low + (high - low)/2;
            // cout<<low<<" "<<mid<<" "<<high<<'\n';
            mini = min(mini,nums[low]);
            // if(nums[low] <= nums[mid] && nums[mid] <= nums[high]){
            //     mini = min(mini,nums[low]);
            // }

            if(nums[low] <= nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
            if(low < nums.size() - 1)
            mini = min(mini,nums[low]);
        }

     return mini;   
    }
};