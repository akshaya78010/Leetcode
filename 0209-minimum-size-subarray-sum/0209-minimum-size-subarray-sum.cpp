class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
       int sumi = nums[0];
       
       int i = -1;
       int j = 0;
       int n = nums.size();

        int mini = INT_MAX;
    while(j < n){
        // cout<<i<<" "<<j<<'\n';
        if(sumi < target){
            j+=1;
            if(j < n)
            sumi += nums[j];
        }
        else if(sumi >= target){
            mini = min(mini,(j-i));
            i+=1;
            sumi -= nums[i];
        }
    }

    if(mini == INT_MAX){
        return 0;
    }
    else
    {
        return mini;
    }
    }
};