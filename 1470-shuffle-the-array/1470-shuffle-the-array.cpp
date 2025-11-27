class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
     vector<int>temp;

    int i = 0;
    int j = n;
    int county = 0;
     
    while(county < nums.size()){
        temp.push_back(nums[i]);
        temp.push_back(nums[j]);

        i+=1;
        j+=1;
        county += 2;
     }

       return temp;
    }
};