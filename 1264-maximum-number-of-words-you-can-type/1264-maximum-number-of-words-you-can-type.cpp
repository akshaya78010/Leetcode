class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char,int>mpp;

        for(int i =0; i < brokenLetters.size() ; i++){
            mpp[brokenLetters[i]] += 1;
        }

        //divorce words;

        vector<string> words;
        istringstream ss(text);  
        string word;

        while(ss >> word) {   
            words.push_back(word);
        }

        bool flag = true;
        int county = 0;
        for(int i =0; i < words.size() ; i++)
        {
            flag = true;
            for(int j =0; j < words[i].size() ; j++){
                if(mpp[words[i][j]]){
                    flag = false;
                    break;
                }
            }

            if(flag== true){
                county += 1;
            }
        }

        return county;
    }
};