class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        vector<long long int>arr(nums.begin(),nums.end());
        int t = arr.size() - 1;
        while(arr.size() > 1){
            for(int i = 0; i < arr.size() - 1 ; i++)
            {
                arr[i] = (arr[i] + arr[i+1])%10;
                // cout<<arr[i]<<" "<<i<<'\n';
            }
            // cout<<arr[0]<<'\n';
            arr.erase(arr.end()-1);
        }

        for(int i =0; i < arr.size() ; i++)
        {
            cout<<arr[i]<<" ";
        }
        return arr[0];
    }
};