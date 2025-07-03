class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";
        string new_str ="";
        while(str.size() < k)
        {
            new_str = "";
           for(int i =0; i < str.size() ; i++)
           {
            new_str += (str[i] + 1);
           }
           str = str + new_str;
        }
        return str[k-1];
    }
};