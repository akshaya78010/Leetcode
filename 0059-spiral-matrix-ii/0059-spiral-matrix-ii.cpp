class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>res(n,vector<int>(n,0));

        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        int ele = 1;
        while(top <= bottom && left <= right){

            for(int i = top ; i <= right ; i++){
                res[top][i] =  ele;
                ele += 1;
            }

            top += 1;

            for(int i = top ; i <= bottom ; i++){
                res[i][right] = ele;
                ele += 1;
            }

            right -=1;

            if(top <= bottom){
            for(int i = right ; i >= left ; i--){
                res[bottom][i] = ele;
                ele += 1;
            }

            bottom -=1;
            }

            if(left <= right){
            for(int i = bottom ; i >= top ; i--){
                res[i][left] = ele;
                ele += 1;
            }
            left += 1;
            }
        }

        return res;
    }
};