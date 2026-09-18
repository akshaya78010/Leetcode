class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {

     unordered_map<int,int>mpp;   
     vector<int>res;

     int n = nums.size();
     int m = queries.size();
     int county = 1;
     for(int i = 0; i < n ; i++){
        if(nums[i] == x){
            mpp[county++] = i;
        }
     }

    for(int i = 0; i < queries.size() ; i++){
        if(mpp.find(queries[i]) != mpp.end()){
            res.push_back(mpp[queries[i]]);
        }
        else{
            res.push_back(-1);
        }
    }

    return res;
    }
};