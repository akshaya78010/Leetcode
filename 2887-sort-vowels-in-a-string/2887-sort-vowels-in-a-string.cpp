class Solution {
public:
    int vow_yes(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return 1;
        }
        return 0;
    }
    string sortVowels(string s) {
        string vowels = "";

        for(int i=0 ; i < s.size() ; i++)
        {
            if(vow_yes(s[i])){
                vowels+=s[i];
            }
        }

        sort(vowels.begin(),vowels.end());

        int x = 0;
        for(int i =0; i < s.size() ; i++)
        {
            if(vow_yes(s[i])){
             s[i] = vowels[x++];
            }
        }

        return s;
    }
};