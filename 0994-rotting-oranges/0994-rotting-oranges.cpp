class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        map<pair<int, int>, int>visited;

        queue<pair<int,int>>q;

        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size() ; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }       
            }
        }

        int county = q.size();
        int res = 0;
        int i,j;
        while(!q.empty()){
            i = q.front().first;
            j = q.front().second;

            q.pop();
            if(county == 0){
                county = q.size();
                res += 1;
            }
            else{
                county -=1;
            }

            if(grid[i][j] == 2){
                // cout<<i<<" "<<j<<'\n';
                    if(!visited[{i-1,j}] && i-1 >= 0 && grid[i-1][j] == 1){
                        grid[i-1][j] = 2;
                        q.push({i-1,j});
                        visited[{i-1,j}] = 1;
                        // cout<<"one"<<'\n';
                    }

                    if(!visited[{i,j - 1}] && j-1 >= 0 && grid[i][j-1] == 1){
                         grid[i][j-1] = 2;
                        q.push({i,j-1});
                        visited[{i,j - 1}] = 1;
                        // cout<<"two"<<'\n';
                    }

                    if(!visited[{i+1,j}] && i+1 < grid.size() && grid[i+1][j] == 1){
                         grid[i+1][j] = 2;
                        q.push({i+1,j});
                        visited[{i+1,j}] = 1;
                        // cout<<"Three"<<'\n';
                    }

                    if(!visited[{i,j+1}] && j+1 < grid[i].size() && grid[i][j+1] == 1){
                         grid[i][j+1] = 2;
                        q.push({i,j+1});
                        visited[{i,j+1}] = 1;
                        // cout<<"Four"<<'\n';
                    }
                } 
        }

        bool all_rotten = true;
        
        for(int i =0 ; i < grid.size() ; i++){
            for(int j =0 ; j <grid[i].size() ; j++){
                if(grid[i][j] == 1){
                    all_rotten = false;
                    break;
                }
            }
        }

        if(!all_rotten) return -1;
        return res;
    }
};