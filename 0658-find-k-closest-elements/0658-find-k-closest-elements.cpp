class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       sort(arr.begin(),arr.end(),[x](const int &a,const int &b){
        return ((abs(a-x) < abs(b-x)) || ((abs(a-x) == abs(b-x)) && (a < b)));
       });

       sort(arr.begin(),arr.begin() + k);

       vector<int>res;

       for(int i = 0; i < k ; i++){
        res.push_back(arr[i]);
       }

       return res;
    }
};