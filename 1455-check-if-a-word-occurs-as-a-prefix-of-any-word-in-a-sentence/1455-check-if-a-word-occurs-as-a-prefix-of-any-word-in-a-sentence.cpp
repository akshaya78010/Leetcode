class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string>arr;
        istringstream stream(sentence);
        string word;
        int flag = 1;
        while(stream>>word)
        {
            arr.push_back(word);
        }
        for(int i =0; i < arr.size() ; i++)
        {
            string str = arr[i];
           str = str.substr(0,searchWord.size());
           if(str == searchWord)
           {
            return i+1;
           }
        }
        return -1;
    }
};