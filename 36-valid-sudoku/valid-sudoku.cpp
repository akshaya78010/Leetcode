class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        char number;
        int county =0 ;
        int n = board.size();
        int l = 0;
        for(int i =0; i < board.size() ; i++)
        {
          for(int j = 0; j < board.size() ; j++)
          {
            number = board[i][j];
            if(number == '.')
            {
               continue;
            }
            for(int a = 0 ; a <  n ; a++)
            {
                if(number == board[i][a])
                {
                    county +=1;
                }
                cout<<"{"<<i<<","<<a<<"}";
            }
            
            if(county > 1)
            {
              return false;
            }
            
            cout<<'\n';
            county = 0;
            for(int b = 0 ; b < n ; b++)
            {
               if(number == board[b][j])
               {
                county +=1;
               }
               cout<<"{"<<b<<","<<j<<"}";
            }
            cout<<'\n';
            if(county > 1)
            {
                return false;
            }
           
            county = 0;
          }
        }
           for(int p = 0 ; p < 9 ; p+=3){
           for(int d = 0 ; d < 9; d+=3)
           { map<int,int>mpp;
             for(int e = 0; e < 3 ; e++)
             {
                for(int f = 0 ; f < 3 ; f++)
                {
                    number = board[e+p][f+d];
                    if(number!= '.'){
                    mpp[number]+=1;
                    }
                    
                    if(mpp[number] > 1)
                    {
                        return false;
                    }
                   
                }
             }
           }
           }


       return true;
    }
};