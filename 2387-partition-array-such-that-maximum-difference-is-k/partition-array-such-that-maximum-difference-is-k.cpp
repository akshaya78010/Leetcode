class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        //how bigshot the number is single even 0 at k is answer 1
         if(nums.size() == 1)
        {
            return 1;
        }
      
        sort(nums.begin(),nums.end());
       
        int county =1 ;
        int i = 0,j = 1;
        int n = nums.size();
        while(i < j &&  j < n)
        {
            if((nums[j] - nums[i]) <= k)
            {
                j+=1;
            }
            else
            {
                county+=1;
                i = j;
                j+=1;
                if(j >= n)
                {
                 break;
                }
            }
        }
        return county;
    }
};