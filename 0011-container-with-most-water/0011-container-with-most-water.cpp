class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0 ;
        int j = height.size() - 1;
        int maxi = 0;
        while(i < j)
        {
            if(height[i] <= height[j])
            {
                // cout<<"maxi : "<<maxi<<'\n'<<"height[i] : "<<height[i]<<'\n'<<"heoght[j]: "<<height[j]<<'\n'<<"mini"<<min(height[i],height[j])<<'\n'<<"(j-i)"<<(j-i)<<'\n';
                maxi = max(maxi,min(height[i],height[j]) * (j-i));
                i+=1;
            }
            else if(height[i] > height[j])
            {
                maxi = max(maxi,min(height[i],height[j]) * (j-i));
                j-=1;
            }
        }
        return maxi;
    }
};