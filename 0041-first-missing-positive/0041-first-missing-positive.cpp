class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        
        int n = arr.size();

        for(int i =0; i < n ; i++){
            while(arr[i] >= 1 && arr[i] <= n && arr[i] != arr[arr[i] - 1]){
                swap(arr[i],arr[arr[i] - 1]);
            }
        }

        int res = -1;

        for(int i =0; i < n ; i++){
            if(arr[i] != i+1){
                res = i+1;
                break;
            }
        }

        if(res == -1){
            res = n+1;
        }

        return res;
    }
};