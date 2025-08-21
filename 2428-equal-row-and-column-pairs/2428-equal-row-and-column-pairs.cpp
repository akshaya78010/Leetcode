class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        // map<vector<int>,int>mpp;
        int n = grid.size();
        // for(int i =0 ; i < grid.size() ; i++)
        // {
        //     mpp[grid[i]] += 1;
        // }
        
        map<vector<int>,int>mpp1;
        vector<int>arr(n,0);
        int x =0;
        for(int i =0; i < n ; i++)
        {
            x = 0;
            for(int j = 0 ; j < n ; j++)
            {
                arr[x++] = grid[j][i];
            }
            mpp1[arr] += 1;
        }

          int county =0 ;
         for(int i =0; i < n ; i++)
        {
            x = 0;
            for(int j = 0 ; j < n ; j++)
            {
                arr[x++] = grid[i][j];
            }
            county +=mpp1[arr];
        }
       
       return county;
    }
};