class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        vector<vector<int>>res;
        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i < board.size() ; i++){
            res.push_back(board[i]);
        }

        int live = 0;

        for(int i =0; i < m ; i++){
            for(int j =0; j < n ; j++){
                live = 0;
                //top left diag
                if(i > 0 && j > 0){
                    if(res[i - 1][j - 1] == 1){
                        live += 1;
                    }
                }

                //top right diag
                if(i > 0 && j < n - 1){
                    if(res[i - 1][j + 1] == 1){
                        live += 1;
                    }
                }

                //top
                if(i > 0){
                    if(res[i - 1][j] == 1){
                        live += 1;
                    }
                }

                //left
                if(j > 0){
                    if(res[i][j - 1] == 1){
                        live += 1;
                    }
                }


                //right
                if(j < n - 1){
                    if(res[i][j + 1] == 1){
                        live += 1;
                    }
                }

                //bottom
                if(i < m - 1){
                    if(res[i + 1][j] == 1){
                        live += 1;
                    }
                }

                //bottom left diag
                if(i < m - 1  && j > 0){
                    if(res[i + 1][j - 1] == 1){
                        live += 1;
                    }
                }

                //bottom right diag
                if(i < m - 1 && j < n - 1){
                    if(res[i + 1][j + 1] == 1){
                        live += 1;
                    }
                }

                //check
                 if(res[i][j] == 1){
                if(live >= 2 && live <= 3){
                    board[i][j] = 1;
                }
                else{
                    board[i][j] = 0;
                }
            }
            else if(res[i][j] == 0){
                if(live == 3){
                    board[i][j] = 1;
                }
                else
                {
                    board[i][j] = 0;
                }
            }
            }
        }
    }
};