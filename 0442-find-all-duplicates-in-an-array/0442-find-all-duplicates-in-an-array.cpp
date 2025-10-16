class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mpp;
        for(int i =0; i < nums.size() ; i++)
        {
            mpp[nums[i]]+=1;
        }
        nums.clear();
        for(auto it = mpp.begin() ; it != mpp.end() ; it++)
        {
            if(it->second > 1)
            {
                nums.push_back(it->first);
            }
        }
        return nums;
    }
};