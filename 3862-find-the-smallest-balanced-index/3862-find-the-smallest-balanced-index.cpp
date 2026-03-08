class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 1){
            return -1;
        }
        vector<long long int>nums1(n,0);
        // nums1[0] = nums[0];

        int x = 0;
        long long int pro = 1;
       for(int i = 0 ; i < n ; i++){
        if(pro > 1e18 / max(1, nums[n-i-1])) break;
        pro *= nums[n-i-1];
        nums1[x] = pro;
        x+=1;
       }

        reverse(nums1.begin(),nums1.end());
        // for(int i =0; i < nums1.size() ; i++){
        //     cout<<nums1[i]<<" ";
        // }

        long long int sumi = 0;
        int res_ind = -1;
        for(int i =0; i < n ; i++){
            sumi += nums[i];
            if(i == 0 || i == n-1){
                if(i == 0){
                    if(0 == nums[i+1]){
                        res_ind = i;
                        break;
                    }
                }
                else if(i == n-1){
                    if(sumi - nums[i] == 1){
                        res_ind = i;
                        break;
                    }
                }
            }
            else{
           if(sumi-nums[i] == nums1[i+1]){
            res_ind = i;
            break;
           }
        }
        }

        return res_ind;
    }
};