class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        int sumi = 0;
        int county = 0;
        for(int i =0; i < apple.size() ; i++){
            sumi += apple[i];
        }

        sort(capacity.begin(),capacity.end());

        for(int j = capacity.size() - 1; j >= 0 ; j--){
            if(sumi <= 0){
                break;
            }
            sumi -= capacity[j];
            county += 1;
        }

        return county;
    }
};