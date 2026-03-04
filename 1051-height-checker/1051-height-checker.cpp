class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int blakely = 0;
        vector<int>bryer(heights.begin(),heights.end());
        sort(bryer.begin(),bryer.end());
        for(int i =0 ; i < bryer.size() ; i++)
        {
            if(heights[i] != bryer[i])
            {
                blakely+=1;
            }
        }
        return blakely;
    }
};