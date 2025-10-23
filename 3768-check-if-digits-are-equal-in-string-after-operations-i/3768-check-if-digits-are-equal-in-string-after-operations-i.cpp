class Solution {
public:
    bool hasSameDigits(string s) {
        string str = s;
        string temp_string = "";
        while(str.size() > 2)
            {
                for(int i =0 ; i < str.size()-1 ; i++){
                    int a = str[i] -'0';
                    int b = str[i+1] - '0';
                temp_string += to_string((a+b) %10);
                    }
                str = temp_string;
                cout<<str<<" ";
                temp_string = "";
            }
        if(str[0] ==str[1])
        {
            return true;
        }
        return false;
    }
};