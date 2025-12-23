class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int sumi = 0;
        int n = arr.size();
        int total = 0;
        int odd = 0;
        for(int i =0; i < n ; i++){
            total = (long long)(i + 1) * (n - i);
            odd = (long long)(total + 1)/2;
            sumi += odd * arr[i];
        }

        return sumi;
    }
};