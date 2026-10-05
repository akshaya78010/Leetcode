class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        long long sizer = 1LL * m * k;
        if(sizer > bloomDay.size()){
            return -1;
        }

        int low = 1;
        int high = *max_element(bloomDay.begin(),bloomDay.end());

        // cout<<high<<'\n';

        int mid;
        int last_res = -1;

        vector<int>temp(bloomDay.size(),0);
        int county =0;
        int no_of_boq = 0;
        while(low <= high){
            mid = low + (high - low)/2;

            //find max no of boquets can be made by the mid

             no_of_boq = 0;

            for(int i = 0 ; i < bloomDay.size() ; i++){
                temp[i] = bloomDay[i];
            }

            for(int i = 0; i < temp.size(); i++){
                if(mid >= temp[i]){
                    temp[i] = 1;
                }
                else{
                    temp[i] = 0;
                }
                // cout<<temp[i]<<" ";
            }
            // cout<<'\n';
            
            county = 0;
            int flag = 0;
            for(int i = 0 ; i < temp.size() ; i++){
                if(temp[i] == 0){
                    county = 0;
                }
                else if(temp[i] == 1){
                    county += 1;
                }

                   if(county >= k){
                        flag = 1;
                        // cout<<county<<" "<<k<<" "<<"bcounty/k: "<<county/k<<'\n';
                        no_of_boq += (county/k);
                        county -= (county/k) * k;
                        //  cout<<county<<" "<<k<<" "<<"acounty/k: "<<county/k<<'\n';
                    }

            }

           if(flag == 0){
            no_of_boq = (county/k);
           }

            // cout<<mid<<" "<<no_of_boq<<'\n';
            if(no_of_boq >= m){
                last_res = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return last_res;
    }
};