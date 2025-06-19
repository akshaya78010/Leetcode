class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mpp;

        for(int i =0; i < nums.size() ; i++)
        {
            mpp[nums[i]]+=1;
        }

       int maxi = *max_element(nums.begin(),nums.end());
       vector<int>arr;
        for(int i = 1; i <= nums.size() ; i++)
        {
            if(mpp[i] == 0)
            {
                arr.push_back(i);
            }
        }

        return arr;
    }
};