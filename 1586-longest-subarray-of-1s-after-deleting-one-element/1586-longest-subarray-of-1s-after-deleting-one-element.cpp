class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int pos = -1;
        int counter = 0;
        int maxi = 0;

        for(int i =0; i < nums.size() ; i++)
        {
            maxi = max(maxi,counter);
            if(nums[i] == 0)
            {
                if(pos == -1){
                    pos = i+1;
                }
                else{
                   counter = i+1 - pos - 1;
                   pos = i+1;
                   maxi = max(maxi,counter);
                }
            }
            else{
            counter += 1;
            maxi = max(maxi,counter);
            }

            maxi = max(maxi,counter);
            cout<<counter<<" "<<maxi<<'\n';
        }
        
        maxi = max(maxi,counter);
        if(maxi == nums.size()){
            maxi -=1;
        }

        return maxi;
    }
};