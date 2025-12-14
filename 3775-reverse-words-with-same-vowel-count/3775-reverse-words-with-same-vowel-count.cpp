class Solution {
public:
    int vow_county(string str){
        int county = 0;

        for(int i = 0; i < str.size() ; i++)
            {
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                    county += 1;
                }
            }

        return county;
    }
    
    string reverseWords(string s) {
         stringstream ss(s);
        string word;
        vector<string>arr;

        while(ss >> word){
            arr.push_back(word);
        }

       int fst_county = vow_county(arr[0]);

        cout<<fst_county<<'\n';
        for(int i = 1 ; i < arr.size() ; i++)
            {
                cout<<vow_county(arr[i])<<'\n';
                if((vow_county(arr[i])) == fst_county){
                    reverse( arr[i].begin() , arr[i].end() );
                }
            }

        s = "";
        for(int i =0; i < arr.size() ; i++)
    {
        if(i == arr.size() - 1){
            s += arr[i];
        }
        else
        {
            s += arr[i] + " ";
        }
    }
        return s;
    }
};