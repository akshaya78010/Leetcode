class Solution {
public:
    int concatenatedBinary(int n) {
        int mod = 1e9+7;
        long long sumi = 1;
        for(int i = 2; i <= n ; i++){
            sumi = ((sumi << ((int)log2(i)+1)) | i)%mod;
            // cout<<sumi<<'\n';
        }

        // cout<<sumi% 1000000007<<'\n';
        int res =  sumi%1000000007;
        return res;
    }
};