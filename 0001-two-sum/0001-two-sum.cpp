class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mpp;

        int n = nums.size();
        //put all nums in map
        for(int i = 0; i < nums.size() ; i++){
            mpp[nums[i]] += 1;
        }

        int diff = 0;
        vector<int>res;
        // bool flag = false;
        int to_find = 0;

        //find the other num
        for(int i = 0; i < nums.size() ; i++){
            diff = target - nums[i];

            if(mpp.find(diff) != mpp.end()){
                if(nums[i] == diff && mpp[nums[i]] <= 1){ continue;}
               to_find = diff;
               cout<<to_find;
               res.push_back(i);
               break;
                }
            }

    //find the index of other number
    for(int i =0 ; i < n ; i++){
        if(nums[i] == to_find && i != res[0]){
            res.push_back(i);
            break;
        }
    }    

    sort(res.begin(),res.end());

    return res;
    }
};