class Solution {
public:
    int scoreDifference(vector<int>& nums) {

        int turn = 0;
        int first = 0;
        int second = 0;
        for (int i = 0; i < nums.size(); i++) {
            if((nums[i] % 2 != 0) || ((i + 1) % 6 == 0)){
            if ((nums[i] % 2 != 0)) {
                // cout<<"hey"<<'\n';
                if (turn == 0) {
                    turn = 1;
                } else if (turn == 1) {
                    turn = 0;
                }
            }
            if (((i + 1) % 6 == 0)) {
                if (turn == 0) {
                    turn = 1;
                } else if (turn == 1) {
                    turn = 0;
                }
            }

            if (turn == 0) {
                first += nums[i];
            } else if (turn == 1) {
                second += nums[i];
            }
        }
        else {
            if (turn == 0) {
                first += nums[i];
            } else if (turn == 1) {
                second += nums[i];
            }
        }

        // cout << first << " " << second << '\n';
    }

    return (first - second);
}
}
;