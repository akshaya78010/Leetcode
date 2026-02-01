class Solution {
public:
    int minimumCost(vector<int>& nums) {
        
        //1st compulsary
        int cost = nums[0];
        int mini = INT_MAX;

        nums.erase(nums.begin());

        sort(nums.begin(),nums.end());

        cost += nums[0] + nums[1];

        return cost;
    }
};