class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        
        int county = 1;
        vector<int>arr;
        for(int i =0; i < nums.size()-1 ; i++)
        {
            cout<<nums[i]<<" "<<county<<'\n';
            if(nums[i] < nums[i+1]){
                // nums[i] = county;
                county += 1;
            }
            else
            {
                arr.push_back(county);
                county = 1;
            }
             
        }
        arr.push_back(county);

        for(int i =0; i < arr.size() ; i++)
        {
            cout<<arr[i]<<" ";
        }
            cout<<'\n';
        for(int i =0; i < arr.size()-1 ; i++)
        {
            cout<<arr[i]<<" "<<k<<" "<<arr[i+1]<<'\n';
            if((arr[i] >= k) && (arr[i+1] >= k))
            {
                return true;
            }
        }
        cout<<'\n';
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());

        if(arr[0] >= (k * 2)){
            return true;
        }

        return false;
    }
};