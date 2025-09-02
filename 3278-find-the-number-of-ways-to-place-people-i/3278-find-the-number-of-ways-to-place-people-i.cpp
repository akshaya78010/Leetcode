class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](vector<int>a,vector<int>b){
           if(a[0] == b[0]){
            return a[1] > b[1];
           }

           return a[0] < b[0];
        });

      for(int  i=0; i < points.size() ; i++)
      {
        cout<<points[i][0]<<" "<<points[i][1]<<'\n';
      }
        int county =0;

        int a,b,c,d =0;
        int n = points.size();
        int flag = 0;
        for(int i =0; i < points.size() ; i++)
        {
            for(int j = i+1 ; j < n ; j++){
           a = points[i][0];
           b = points[i][1];
           c = points[j][0];
           d = points[j][1];
            flag = 0;

            cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';
           if((a <= c) && (b >= d)){

            //check
            for(int k =i+1; k < j ; k++)
            {
                if((a <= points[k][0] && points[k][0] <= c) && (d <= points[k][1] && points[k][1] <= b))
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                county += 1;
            }
           }
        }
        }
        return county;
    }
};