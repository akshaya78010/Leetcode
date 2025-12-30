class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int i =0;
        int j =0;

        int n = nums.size();
        int county =0 ;
        int maxi = INT_MIN;

        while(j < n){
            if(nums[j] == 0){
                if(k >= 1){
                    j+=1;
                    county += 1;
                    maxi = max(maxi,county);
                    k-=1;
                }
                else if(k < 1){
                   
                   while(k < 1){
                    if(nums[i] == 0){
                        k+=1;
                    }
                    county -= 1;
                    i+=1;
                   }
                   
                }
            }
            else if(nums[j] == 1){
                county += 1;
                maxi = max(maxi,county);
                j+=1;
            }
        }

        return maxi;
    }
};