class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int low = 0;
        int mid;
        int high = nums.size() - 1;
        int last_res = -1;
        while(low <= high){
            mid = low + (high - low)/2;

            if(nums[mid] == target){
                cout<<target;
             return true;
            }
            if(nums[mid] == nums[low] && nums[mid] == nums[high]){
                low += 1;
                high -=1;
            }
            else if(nums[low] <= nums[mid]){
            // cout<<1<<'\n';
               if(target >= nums[low] && target < nums[mid]){
                high = mid - 1;
               }
               else{
                low = mid + 1;
               }
            //    cout<<low<<" "<<mid<<" "<<high<<'\n';
            }
            else{
                // cout<<2<<'\n';
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
                // cout<<low<<" "<<mid<<" "<<high<<'\n';
            }
        }

        return false;
    }
};