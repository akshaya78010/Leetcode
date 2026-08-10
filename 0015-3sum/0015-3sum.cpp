class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     sort(nums.begin(),nums.end());

        int l,r = 0;
        vector<vector<int>>res;
        int n = nums.size();

        int sumi = 0;

        for(int i =0 ; i < n; i++){
            l = i+1;
            r = n-1;

            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            while(l < r){
                sumi = nums[i] + nums[l] + nums[r];
                
                if(sumi == 0){
                    res.push_back({nums[i],nums[l],nums[r]});

                    l+=1;
                    r-=1;

                    while(l < r && nums[l] == nums[l-1]){
                    l+=1;
                    }

                    while(l < r && nums[r] == nums[r+1]){
                    r-=1;
                    }
                }
                else if(sumi < 0){
                    l+=1;
                }
                else if(sumi > 0){
                    r-=1;
                }
            }
        }

        return res;
    }
};