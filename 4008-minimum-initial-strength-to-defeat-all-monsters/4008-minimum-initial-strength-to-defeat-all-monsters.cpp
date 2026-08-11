class Solution {
public:
    bool canKill(long long mid,vector<int>& monsters,vector<long long>&boost,int n){
        
        for(int i = 0; i < n ; i++){
            if(boost[i] + mid >= monsters[i]){
                // cout<<"rec: "<<mid<<'\n';
                mid -= monsters[i];
            }
            else{
                return false;
            }

            if(mid < 0){
                mid = 0;
            }
        }
        return true;
    }

    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        
        long long low = 0;
        long long high = 0;
        int n = monsters.size();

        for(int i = 0; i < monsters.size() ; i++){
            high += monsters[i];
        }

        vector<long long>boost(n,0);


        int a,b,val;
        for(int i =0 ; i < boosts.size() ; i++){
            a = boosts[i][0];
            b = boosts[i][1];
            val = boosts[i][2];

            boost[a] += val;
        
            if(b+1 < boost.size()){
                boost[b+1] -= val;
            }
        }

        for(int i = 1; i < boost.size() ; i++){
            boost[i] = boost[i-1] + boost[i];
        }

        long long mid;
        long long mini = LLONG_MAX;

        while(low <= high){
            mid = low + (high - low)/2;

            if(!canKill(mid,monsters,boost,n)){
                // cout<<"not condition: "<<mid<<'\n';
                low = mid+1;
            }
            else{
                // cout<<mid<<'\n';
                mini = min(mini,mid);
                high= mid - 1;
            }
        }
        return mini;
    }
};