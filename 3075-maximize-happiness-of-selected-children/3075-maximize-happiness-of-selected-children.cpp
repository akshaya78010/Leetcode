class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.begin(),happiness.end());
        reverse(happiness.begin(),happiness.end());

        long long subtr = 0;
        long long n = happiness.size();
        long long res = 0;

        for(int i = 0 ; i < n ; i++){
            
            if(k  == 0){
                break;
            }

            if(happiness[i] - subtr >= 0){
           res += (happiness[i] - subtr);
            }
            else
            {
                break;
            }

            k-=1;
            subtr += 1;
        }

        return res;
    }
};