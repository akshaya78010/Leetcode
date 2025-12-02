class Solution {
public:
    bool judgeCircle(string moves) {
        stack<int>st;
        unordered_map<char,int>mpp;

        for(int i =0; i < moves.size() ; i++)
        {
            if(moves[i] == 'U'){
                mpp['U'] += 1;
            }
            else if(moves[i] == 'D'){
                mpp['U'] -=1;
            }
            else if(moves[i] == 'L'){
                mpp['L'] += 1;
            }
            else if(moves[i] == 'R'){
                mpp['L'] -= 1;
            }
        }

        if(mpp['U'] == 0 && mpp['L'] == 0){
            return true;
        }
        else
        {
            return false;
        }
    }
};