class Solution {
public:
    vector<string> stringSequence(string target) {
        char need;
        string res = "a";
        vector<string>arr = {"a"};
        int j = 0;
        cout<<res[0]<<'\n';
        for(int i = 0 ; i < target.size() ; i++){
            need = target[i];
            if(res[j] != need){
                cout<<j<<" "<<res[j]<<" "<<need<<'\n';
                while(res[j] != need){
                    if(res[j] == 'z'){
                        res[j] = 'a';
                    }
                    else{
                   res[j] = (char)(res[j] + 1);
                    }

                    arr.push_back(res);
                }
            }
            j+=1;
             res += "a";
             arr.push_back(res);
        }
        
        arr.pop_back();
        return arr;
    }
};