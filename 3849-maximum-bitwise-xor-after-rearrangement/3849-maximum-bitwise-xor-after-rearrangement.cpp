class Solution {
public:
    string maximumXor(string s, string t) {

        int zero = 0;
        int one = 0;

        for(int i = 0 ; i < t.size() ; i++){
            if(t[i] == '0'){
                zero += 1;
            }
            else if(t[i] == '1'){
                one += 1;
            }
        }
        string res = "";
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == '0'){
               if(one > 0){
                   one -=1;
                   res += "1";
               }
                else{
                    res += "0";
                }
            }
            else if(s[i] == '1'){
                if(zero > 0){
                    zero -= 1;
                    res += "0";
                }
                else{
                    res += "1";
                }
            }
        }

        string result = "";

        for(int i = 0; i < s.size() ; i++){
            if(s[i] == res[i]){
                result += '0';
            }
            else{
                result += '1';
            }
        }
        return result;
    }
};