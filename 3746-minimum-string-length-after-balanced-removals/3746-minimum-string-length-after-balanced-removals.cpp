class Solution {
public:
    int minLengthAfterRemovals(string s) {
        
        int county_a = 0;
        int county_b = 0;

        for(int i =0 ; i < s.size() ; i++){
            if(s[i] == 'a'){
                county_a += 1;
            }
            else if(s[i] == 'b'){
                county_b += 1;
            }
        }

        return abs(county_a - county_b);
    }
};