class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        
        map<pair<int,int>,int>visited;
        queue<pair<int,int>>q;

        int m = grid.size();
        int n = grid[0].size();
        int sumi = 0;
        int a,b;
        int maxi = INT_MIN;

        for(int i =0 ; i < m ; i++){
            for(int j = 0; j < n ; j++){
                //if watre cell
                if(grid[i][j] > 0 && !visited[{i,j}]){
                    
                    if(!visited[{i,j}]){
                        visited[{i,j}] = 1;
                        q.push({i,j});
                    }

                    while(!q.empty()){
                        a = q.front().first;
                        b = q.front().second;

                        sumi += grid[a][b];

                        q.pop();
                        //if not visited
                        //if out of bounds
                        //if it is not land 
                        // then push the pond cell into the queue
                        if(!visited[{a-1,b}] && a-1 >= 0 && grid[a-1][b] > 0){
                            q.push({a-1,b});
                            visited[{a-1,b}] = 1;
                        }

                        if(!visited[{a,b - 1}] && b-1 >= 0 && grid[a][b-1] > 0){
                            q.push({a,b-1});
                            visited[{a,b - 1}] = 1;
                        }

                        if(!visited[{a,b + 1}] && b+1 < n && grid[a][b+1] > 0){
                            q.push({a,b+1});
                            visited[{a,b + 1}] = 1;
                        }

                        if(!visited[{a+1,b}] && a+1 < m && grid[a+1][b] > 0){
                            q.push({a+1,b});
                            visited[{a+1,b}] = 1;
                        }
                    }
                    maxi = max(maxi,sumi);
                    sumi = 0;
                }
            }
        }

        if(maxi == INT_MIN) return 0;
        return maxi;
    }
};