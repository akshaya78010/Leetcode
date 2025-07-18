class Solution {
public:
    string countAndSay(int n) {
        
        vector<string>arr(n);
        arr[0] = "1";
        int county = 1;
        string res = "1";
        for(int i =0; i < n ; i++)
        {
            arr[i] = res;
            res = "";
            for(int j = 0 ; j < arr[i].size() ; j++)
            {
              if(arr[i][j] == arr[i][j+1])
              {
                county += 1;
              }
              else{
                res += (to_string(county) + arr[i][j]);
                county = 1;
              }
            }
        //   res += (to_string(county) + arr[i][arr.size()-1]);

            
        }

        return arr[n-1];
    }
};