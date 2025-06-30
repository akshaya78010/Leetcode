class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin() , nums.end());

     map<int,int>mpp;
    int index;
    int length = 0;
     for(int i =0; i < nums.size() ; i++)
     {
        if(mpp[nums[i]] == 0){
        mpp[nums[i]] = i+1;
        // cout<<nums[i]<<":"<<i+1<<'\n';
        }
     }

     for(int i = nums.size() - 1; i >= 0 ; i--)
     {
        if(mpp[nums[i] - 1] > 0)
        {
            index = mpp[nums[i] - 1] - 1;
            length = max(length,i - index + 1);
        }
     }
        return length;
    }
};