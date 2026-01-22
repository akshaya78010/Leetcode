class Solution {
public:
    int is_sorted(vector<int>&nums)
{
    for(int i =1 ; i < nums.size() ; i++)
        {
            if(nums[i-1] > nums[i])
            {
                return 0;
            }
        }
    return 1;
}
    int minimumPairRemoval(vector<int>& nums) {
        int county = 0;
        if(nums.size() <= 1)
        {
            return 0;
        }

        while(is_sorted(nums) == 0)
            {
                //min sum
                int min_sum = INT_MAX;
                int min_ind = -1;
                for(int i = 1; i < nums.size() ; i++)
                    {
                            if(nums[i-1] + nums[i] < min_sum){
                            min_sum = (nums[i-1] + nums[i]);
                            min_ind =  i;
                            }
                    }

                if(min_ind == -1)
                {
                    break;
                }

                //operate
                for(int i =1; i < nums.size() ; i++){
                    if(nums[i-1] + nums[i] == min_sum){
                nums[i-1] = min_sum;
                county+=1;
                nums.erase(nums.begin() + i);
                        break;
                    }
                }
            }
        return county;
    }
};