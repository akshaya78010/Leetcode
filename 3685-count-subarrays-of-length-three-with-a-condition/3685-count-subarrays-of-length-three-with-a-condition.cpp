class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int i =0;
        int j =i+2;
        int number =0;
     while(j < nums.size())
     {
        cout<<i<<" "<<j<<'\n';
        cout<<nums[i] + nums[j] << " "<<nums[i+1]*0.5<<'\n';
       if((nums[i] + nums[j]) == (nums[i+1]*0.5))
       {
        number+=1;
       }
       i+=1;
       j+=1;
     }  
     return number;
    }
};