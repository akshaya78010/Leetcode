class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls =0;
        int cows =0;
        map<int,int>mpp;
        for(int i = 0; i < secret.size() ; i++)
        {
           mpp[secret[i]]+=1;
        }
        string new_guess = "";
        for(int i =0; i < secret.size() ; i++)
        {
            if(secret[i] == guess[i])
            {
                bulls+=1;
                mpp[guess[i]]-=1;
            }
            else if(mpp[guess[i]] > 0)
            {
                new_guess+=guess[i];
            }
        }
        for(int i = 0 ; i < new_guess.size() ; i++)
        {
            if(mpp[new_guess[i]])
            {
              cows+=1;
              mpp[new_guess[i]]-=1;
            }
        }
        secret = to_string(bulls) + "A" + to_string(cows) + "B";
        return secret;
    }
};