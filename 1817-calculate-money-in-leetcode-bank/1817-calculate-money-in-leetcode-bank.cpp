class Solution {
public:
    int totalMoney(int n) {
        
        int x = 1;
        int prev = x;
        int county = 1;
        int sumi = 0;
        while(n--){
            sumi += x;
            cout<<x<<" ";
            if(county >= 7)
            {
                x = prev + 1;
                prev = x;
                county = 1;
            }
            else{
            x+=1;
            county += 1;
            }
        }

        return sumi;
    }
};