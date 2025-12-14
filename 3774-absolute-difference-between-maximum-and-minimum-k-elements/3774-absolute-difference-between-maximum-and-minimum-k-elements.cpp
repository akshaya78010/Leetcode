class Solution {
public:
    int absDifference(vector<int>& nums, int k) {

        int maxi = 0;
        int mini = 0;

        sort(nums.begin(),nums.end());
        int temp = k;
        int i = 0;
        while(temp--){
            mini += nums[i];
            i+=1;
        }

        reverse(nums.begin(),nums.end());
        temp = k;
        i = 0;
        while(temp--){
            maxi += nums[i];
            i+=1;
        }

        return (maxi - mini);
    }
};