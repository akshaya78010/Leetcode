class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        sort(piles.begin(),piles.end());
        long long low = 1;
        long long high = piles[piles.size()-1];
        long long mid;
        long long res;
        long long mini = LONG_MAX;
        while(low <= high){
            mid = (low + (high - low)/2);

            long long sumi = 0;
            
            for(int i =0; i < piles.size() ; i++){
                // cout<<ceil(piles[i]*1.0/mid*1.0)<<" : "<<mid<<'\n';
                sumi += ceil(piles[i]*1.0/mid*1.0);
            }
            
            // cout<<mid<<" "<<sumi<<'\n';
            if(sumi <= h){
                mini = min(mini,mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return mini;
    }
};