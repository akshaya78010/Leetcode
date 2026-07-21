class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int org_color = image[sr][sc];

        if (org_color == color)
            return;

        image[sr][sc] = color;

        if(sr-1 >= 0 && org_color == image[sr-1][sc]){
        dfs(image, sr - 1, sc, color);
        }

        if(sr+1 < m && org_color == image[sr+1][sc]){
        dfs(image, sr + 1, sc, color);
        }

        if(sc+1 < n && org_color == image[sr][sc+1]){
        dfs(image, sr, sc + 1, color);
        }

        if(sc-1 >= 0 && org_color == image[sr][sc-1]){
        dfs(image, sr, sc - 1, color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        dfs(image, sr, sc, color);
        return image;
    }
};