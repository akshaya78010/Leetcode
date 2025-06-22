class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int parts = s.size() / k;

        vector<string> result;

        int i = 0;
        int j = k;
        while (parts--) {
            result.push_back(s.substr(i, k));
            i += k;
            cout << i << '\n';
        }

        string temp;
        if (i < s.size()) {
            temp = s.substr(i);
            while (temp.size() < k) {
                temp = temp + fill;
            }
        }

        if(temp.size() == k){
          result.push_back(temp);
        }

        return result;
    }
};