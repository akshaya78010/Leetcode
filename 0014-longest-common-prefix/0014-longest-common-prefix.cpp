class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string temp = "";
        string word = strs[0];

        for(int i = 1 ; i < strs.size() ; i++){
            temp = "";
            for(int j =0 ; j < min(word.size(),strs[i].size()) ; j++){
                if(word[j] != strs[i][j]){
                    break;
                }
                temp += word[j];
            }
            // cout<<temp<<" ";
            word = temp;
            // temp = "";
        }

        return word;
    }
};