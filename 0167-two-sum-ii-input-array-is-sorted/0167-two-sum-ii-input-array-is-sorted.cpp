class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        map<int,int>mpp;

        int n = numbers.size();
        int k = target;
        for(int i = 0 ; i < n ; i++){
            mpp[numbers[i]] += 1;
        }

        int a = -1;
        int b = -1;
        for(int i =0; i < numbers.size() ; i++){
            mpp[numbers[i]] -= 1;

            // cout<<k-numbers[i]<<'\n';
            if(mpp[k - numbers[i]] >= 1){
                a = i+1;
                b = k - numbers[i];
                break;
            }
            mpp[numbers[i]] += 1;
        }

        int bindx = -1;

        for(int l = a ; l < n ; l++){
            if(numbers[l] == b){
                b = l+1;
                break;
            }
        }

        return {a,b};
    }
};