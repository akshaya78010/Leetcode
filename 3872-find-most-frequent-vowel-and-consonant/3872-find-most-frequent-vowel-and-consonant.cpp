class Solution {
public:
    int is_vowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return 1;
        }

        return 0;
    }
    int maxFreqSum(string s) {
      unordered_map<char,int>mpp;

      for(int i =0; i < s.size() ; i++)
      {
        mpp[s[i]] += 1;
      }

       int max_vowel_count = 0;
       int max_cons_count = 0;

       char max_vowel;
       char max_cons;
      for(auto it = mpp.begin() ; it != mpp.end() ; it++){
        if(is_vowel(it->first)){
            if(max_vowel_count < it->second){
                max_vowel_count = it->second;
                max_vowel = it->first;
            }
        }
            else
            {
                if(max_cons_count < it->second){
                    max_cons_count = it->second;
                    max_cons = it->first;
                }
            }
        }
      int res = max_vowel_count + max_cons_count;

      return res;
    }
};