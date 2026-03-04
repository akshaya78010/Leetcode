class Solution {
public:
    bool isSubsequence(string s, string t) {
      int i =0;
      int j = 0;
      bool flag = true;
      while(j < t.size())
      {
        if(s[i] == t[j])
        {
            i+=1;
        }
        j+=1;
        // cout<<s[i]
      }  
      if(i < s.size())
      {
        flag = false;
      }
      return flag;
    }
};