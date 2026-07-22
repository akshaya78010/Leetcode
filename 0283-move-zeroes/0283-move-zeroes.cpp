class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int n = nums.size();
        int temp;
        while(i <= j && j < n){
            if(nums[i] == 0){
                while(j < n && nums[j] == 0){
                    j+=1;
                }

                if(j < n){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                }

                // cout<<i<<" "<<j<<'\n';
                // cout<<nums[i]<<" "<<nums[j]<<'\n';
                i+=1;
            }
            else{
             i+=1;
             j+=1;
            }
        }

        // nums.erase(arr.begin() + i + 1,arr.end());
    }
};