class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        vector<int>pcd(nums.size());
        int maxi = nums[0];

        for(int i =0; i < nums.size() ; i++){
            maxi = max(maxi,nums[i]);
            pcd[i] = gcd(maxi,nums[i]);
        }

        sort(pcd.begin(),pcd.end());

        int i = 0;
        int j = pcd.size()-1;

        long long sumi = 0;
        while(i < j){
            sumi += gcd(pcd[i],pcd[j]);
            i+=1;
            j-=1;
        }

        return sumi;
    }
};