class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro = 1;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                pro = pro * nums[i];
            }
        }
        int county = count(nums.begin(), nums.end(), 0);
        if (county == 0) {
            for (int i = 0; i < n; i++) {
                nums[i] = pro / nums[i];
            }
        } else {
            if (county == 1) {
                for (int i = 0; i < n; i++) {
                    if (nums[i] == 0) {
                        nums[i] = pro;
                    } else {
                        nums[i] = 0;
                    }
                }
            } else if (county > 1) {
                for (int i = 0; i < n; i++) {
                    nums[i] = 0;
                }
            }
        }
        return nums;
    }
};