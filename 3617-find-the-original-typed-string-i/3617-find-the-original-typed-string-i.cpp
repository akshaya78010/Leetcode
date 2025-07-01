class Solution {
public:
    int possibleStringCount(string word) {
        int county =0;
        for(int i=0 ; i < word.size()-1 ; i++)
            {
             if(word[i] == word[i+1])
             {
                 county+=1;
             }
            }
        return county+1;
    }
};