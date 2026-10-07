class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>res(n,0);

        //place neg;

        int x = 1;

        for(int i = 0; i  < n ;i++){
            if(nums[i] < 0){
                res[x] = nums[i];
                x+=2;
            }
        }

        x = 0;
        for(int i = 0; i < n ; i++){
            if(nums[i] >= 0){
                res[x] = nums[i];
                x+=2;
            }
        }

        return res;
    }
};