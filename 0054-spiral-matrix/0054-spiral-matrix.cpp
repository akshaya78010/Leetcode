class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
     int top = 0;
     int left =0;
     int right = m-1;
     int bottom = n-1;
     vector<int>arr;
     while(top <= bottom && left <= right){

     for(int i = top ; i <= right ; i++)
     {
        arr.push_back(matrix[top][i]);
     }   
     top += 1;
     
     for(int i = top ; i <= bottom ; i++)
     {
        arr.push_back(matrix[i][right]);
     }
     right -=1;
    
    if(top <= bottom){
     for(int i = right ; i >= left ; i--){
        arr.push_back(matrix[bottom][i]);
     }
     bottom-=1;
    }

     if(left <= right){
     for(int i = bottom ; i >= top ; i--){
        arr.push_back(matrix[i][left]);
     }
     left += 1;
     }
    }
    return arr;
    }
};