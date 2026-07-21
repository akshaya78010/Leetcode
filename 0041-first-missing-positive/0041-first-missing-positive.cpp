class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
         int no_of_zero = 0;
        for(int i =0 ; i < nums.size() ; i++){
            if(nums[i] <= 0){
                nums[i] = 0;
                no_of_zero += 1;
            }
        }

       int n = nums.size();

        int val;
        for(int i = 1; i <= n ; i++){
            val= abs(nums[i-1]);
            if(val >= 1 && val <= n){
                if(nums[val - 1] == 0){
                    nums[val - 1] = -(n+1);
                }
                else if(nums[val-1] > 0){
                    nums[val - 1] *= -1;
                }
            }
        }

        // long long int original_sum = n*(n+1)/2;
        // int current_sum = 0;

       for(int i = 1 ; i <= n ; i++){
        if(nums[i-1] >= 0){
            return i;
        }
       }

        return n+1;
    }
};