class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        
        long long sumi = 0;
        long long n = nums.size();

        vector<int>smin;
        reverse(nums.begin(),nums.end());

        long long mini = nums[0];
        // cout<<"mini:"<<mini<<'\n';

        for(int i =0; i < nums.size()-1 ; i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
            // cout<<"pushed:"<<mini<<'\n';
            smin.push_back(mini);
        }

        reverse(smin.begin(),smin.end());

        // smin.push_back(nums[0]);

        reverse(nums.begin(),nums.end());

        long long int score = INT_MIN;

        for(int i = 0; i < n-1 ; i++){
            sumi += nums[i];
            
            score = max(score,(sumi - smin[i]));
            // cout<<score<<" "<<sumi<<" "<<smin[i]<<'\n';
        }

    return score;
    }
};