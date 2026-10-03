class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1;
        int mid;
        int high = *max_element(nums.begin(),nums.end());

        int sumi = 0;
        int mini = INT_MAX;

        while(low <= high){
            mid = low + (high - low)/2;

         //operation
         sumi = 0;
         for(int i = 0 ; i < nums.size() ; i++){
            sumi += ceil((double)nums[i]/(double)mid);
         }

         if(sumi <= threshold){
            mini = min(mini,mid);
            high = mid - 1;
         }
         else{
            low = mid + 1;
         }
        }

        return mini;
    }
};