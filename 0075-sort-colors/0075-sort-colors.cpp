class Solution {
public:
    void sortColors(vector<int>& nums) {
       
       int one =0 ;
       int zero = 0;
       int two = 0;
        int n = nums.size();
       for(int i = 0; i < n ; i++){
        if(nums[i] == 0){
            zero += 1;
        }
        else if(nums[i] == 1){
            one += 1;
        }
        else if(nums[i] == 2){
            two += 1;
        }
       }

       int i =0 ;
       while(zero--){
        nums[i++] = 0;
       }

        while(one--){
            nums[i++] = 1;
        }

        while(two--){
            nums[i++] = 2;
        }

    }
};