class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
       map<int,int>mpp;
       vector<int>arr;

       int counter =0;
       for(int i =0; i < nums.size() ; i++){
         if(nums[i] == 0)
         {
            counter +=1;
           mpp[counter] += 1;
         }
         else
         {
            counter = 0;
         }
       } 

       long long county =0;
       for(auto it = mpp.begin() ; it != mpp.end() ; it++)
       {
          arr.push_back(it->second);
       }
       
       reverse(arr.begin(),arr.end());

       for(int i = 1; i < arr.size() ; i++)
       {
        arr[i] = arr[i-1] + arr[i];
       }

       for(int i =0; i < arr.size() ; i++){
        county += arr[i];
       }
       return county;
    }
};