class Solution {
public:
    int let_it_set(int a,int n)
    {
        for(int i = 0 ; i < n ; i++)
        {
             if((i | (i+1)) == n)
             {
                return i;
             }
        }
        return -1;
    }
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>brr;
        for(int i =0 ; i < nums.size() ; i++)
        {
        brr.push_back(let_it_set(1,nums[i]));
        }
        return brr;
    }
};