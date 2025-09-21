class Solution {
public:
   void fun(int idx,int n,int k,vector<int>&ds,vector<vector<int>>&arr)
   {
    if(idx > n)
    {
        if(ds.size() == k){
            arr.push_back(ds);
        }
        return;
    }
    ds.push_back(idx);
    fun(idx+1,n,k,ds,arr);
    ds.pop_back();
    //not pick
    fun(idx+1,n,k,ds,arr);
   }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>arr;
        vector<int>ds;
        fun(1,n,k,ds,arr);
        return arr;
    }
};