class Solution {
public:
    string reverseWords(string s) {
        
        vector<string>arr;

        string word;
        stringstream ss(s);
        while(ss >> word){
            arr.push_back(word);
        }

        s = "";
        
        reverse(arr.begin(),arr.end());
        int n = arr.size();
        for(int i =0; i < arr.size() ; i++)
        {
            s += arr[i];
            if(i < n-1){
            s += " ";
            }
        }

        return s;
    }
};