class Solution {
public:
    void process(vector<int>&arr1,vector<int>&arr2)
    {
        int siz = arr2.size() - arr1.size();

        while(siz--){
            arr1.push_back(0);
        }
    }
    int compareVersion(string version1, string version2) {

        string word;
        vector<int>arr;
        vector<int>arr1;

        stringstream ss(version1);
        stringstream ss1(version2);

        while(getline(ss,word,'.')){
            arr.push_back(stoi(word));
        }

        while(getline(ss1,word,'.')){
            arr1.push_back(stoi(word));
        }

        int n1 = arr.size();
        int n2 = arr1.size();
         
        if(n1 < n2){
            process(arr,arr1);
        }
        else if(n1 > n2)
        {
            process(arr1,arr);
        }

        int res = 0;
        for(int i =0; i < arr.size() ; i++)
        {
            if(arr[i] < arr1[i])
            {
                res = -1;
                break;
            }
            else if(arr[i] > arr1[i]){
                res = 1;
                break;
            }
            else
            {
                res = 0;
            }
        }

        return res;
    }
};