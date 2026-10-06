class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int mid;
        int sumi = 0;
        int day = 0;
        int last_res = 0;

        while (low <= high) {
            mid = low + (high - low) / 2;

            // with mid limit find how many days it takes for the packages to be
            // shipped

            sumi = 0;
            day = 0;

            int i = 0;
            while (i < weights.size()) {

                if (sumi + weights[i] <= mid) {
                    sumi += weights[i];
                    i += 1;
                } else {
                    day += 1;
                    sumi = weights[i++];
                }
                // cout<<sumi<<" "<<day<<'\n';
            }

            if (sumi > 0) {
                sumi = 0;
                day += 1;
            }
            //    cout<<sumi<<" "<<mid<<":"<<day<<" "<<low<<" "<<high<<'\n';

            if (day <= days) {
                last_res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return last_res;
    }
};