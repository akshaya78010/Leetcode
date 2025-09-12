class Solution {
public:

    int is_vowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return 1;
        }
        return 0;
    }
    bool doesAliceWin(string s) {
        
        int n = s.size();
        vector<int>arr(n);

        int vc = 0;

        int x = 0;
        for(int i = 0; i < n ; i++)
        {
            if(is_vowel(s[i])){
                vc+=1;
            }
            arr[x++] = vc;
        }

        cout<<vc<<'\n';
        bool flag = false;
        if(vc == 0){
            return false;
        }
       else
       {
        return true;
       }

        return flag;
    }
};