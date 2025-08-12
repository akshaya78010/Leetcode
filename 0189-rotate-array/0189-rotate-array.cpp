class Solution {
public:

    void rotate(vector<int>& nums, int k) {
               
        if(nums.size() < k)
        {
           k = k%nums.size();
        }
        vector<int>arr(nums.size());

        int index = nums.size()-k;
                
        int x = 0;
        for(int i = index ; i < nums.size() ; i++)
        {
            arr[x++] =  nums[i];
        }

        for(int i =0; i < nums.size()-k ; i++)
        {
            arr[x++] = nums[i];
        }

        for(int i =0; i < nums.size() ; i++)
        {
            nums[i] = arr[i];
        }
    }
};