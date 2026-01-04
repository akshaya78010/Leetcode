class Solution {
public:
    string largestEven(string s) {
        reverse(s.begin(),s.end());

       auto it = s.begin();
        while(*it % 2 != 0){
            s.erase(it);
        }

        reverse(s.begin(),s.end());

        return s;
    }
};