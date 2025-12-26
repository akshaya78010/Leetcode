class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int>rmax(n);

        int lmax = height[0];

        rmax[n-1] = height[n-1];

        for(int i = n-2 ; i >= 0 ; i--){
            rmax[i] = max(height[i],rmax[i+1]);
        }

        int res = 0;
        for(int i =1; i < n - 1 ; i++){
            lmax = max(lmax,height[i]);

            res += min(lmax,rmax[i]) - height[i];
        }

        return res;
    }
};