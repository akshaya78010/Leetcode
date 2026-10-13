class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        // sort(nums.begin(),nums.end());

        long long sumi = 0;

        sort(nums.begin(),nums.end(),[](int a,int b){
            return (a * a) < (b * b);
        });

        int symbols = nums.size() - 1;

        symbols = ceil(nums.size()/2);

        // cout<<"symbols: "<<symbols<<'\n';
        sumi = 0;
        for(int i = symbols ; i < nums.size() ; i++)
            {
                 cout<<sumi<<'\n';
               sumi+=(nums[i]*nums[i]);
            }

        for(int i = 0 ; i < symbols ; i++)
            {
                sumi -= (nums[i] * nums[i]);
            }
        return sumi;
    }
};