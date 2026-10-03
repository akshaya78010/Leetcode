class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        long long int low = 1;
        long long int high = *max_element(piles.begin(),piles.end());

        long long int mid;
        long long int time = 0;
        long long int mini = INT_MAX;

        while(low <= high){
            mid = low + (high - low)/2;

            time = 0;
            for(int i = 0; i < piles.size() ; i++){
                time += ceil(piles[i] * 1.0/mid * 1.0);
            }

            if(time <= h){
                mini = min(mid,mini);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return mini;
    }
};