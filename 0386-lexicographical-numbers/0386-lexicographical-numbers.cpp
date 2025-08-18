class Solution {
public:
    vector<int> lexicalOrder(int n) {
     vector<string>arr;
     vector<int>res;

     for(int i = 1; i <= n ; i++)
     {
        arr.push_back(to_string(i));
     }     

     sort(arr.begin(),arr.end());

     for(int i =0; i < arr.size() ; i++)
     {
        res.push_back(stoi(arr[i]));
     }

     return res;
    }
};