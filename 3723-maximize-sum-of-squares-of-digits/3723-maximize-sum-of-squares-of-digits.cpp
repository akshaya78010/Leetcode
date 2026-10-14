class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        string res;
        int orig_sum = sum;

        for(int i = 0; i < num ; i++){
            res += "0";
        }

        int x = num - 1;
        int i = 9;
        while (x >= 0) {

            if(sum - i < 0){
                res[x] = sum + '0';
                sum = 0;
            }
            else if(sum - i >= 0){
                res[x] = i + '0';
                sum -= i;
            }
            x-=1;
        }
        

        int sumi = 0;
        for(int i = 0; i < res.size() ; i++){
            sumi += (res[i] - '0');
        }

        // cout<<sumi<<" "<<res<<"\n";
        if(sumi != orig_sum){
            return "";
        }
        sort(res.rbegin(),res.rend());

        return res;
    }
};