class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        set<int>result;
        for(int i = 0; i < nums.size() ; i++)
        {
            if(count(nums.begin(),nums.end(),nums[i]) > 1)
            {
                   result.insert(nums[i]);
            }
        }
        vector<int>resu(result.begin(),result.end());
        return resu;
        }        
};