class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>prefix(nums.size(),0);

        for(int i=0; i < queries.size() ; i++)
        {
            prefix[queries[i][0]] -=1;

            if(queries[i][1]+1 <nums.size())
            {
                prefix[queries[i][1] + 1] +=1;
            } 
        }

        for(int i = 1; i < prefix.size() ; i++)
        {
            prefix[i] = prefix[i-1] + prefix[i];
        }

        cout<<prefix[0]<<'\n';
        for(int i =0; i < nums.size() ; i++)
        {
            if(nums[i] > 0){
            nums[i] = nums[i] + prefix[i];
            }
            if(nums[i] < 0)
            {
                nums[i] = 0;
            }
        }

        

        int flag = 1;

        for(int i =0; i < nums.size() ; i++)
        {
            if(nums[i] != 0)
            {
                flag = 0;
                break;
            }
        }
        return flag;
    }
};