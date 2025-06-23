class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int k = nums.size()/3;
        map<int,int>mpp;
        vector<int>result;
        for(int i =0; i < nums.size() ; i++)
        {
            mpp[nums[i]]+=1;
        }

        for(auto it = mpp.begin() ; it != mpp.end() ; it++)
        {
            if(it->second > k)
            {
                result.push_back(it->first);
            }
        }

        return result;
    }
};