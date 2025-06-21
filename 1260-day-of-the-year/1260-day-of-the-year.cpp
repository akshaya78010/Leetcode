class Solution {
public:
    bool leap_check(int year)
    {
        return ((year%4 == 0) && ((year%100 != 0) || (year%400 == 0)));
    }
    int dayOfYear(string date) {
        int year = stoi(date.substr(0,5));
        int month = stoi(date.substr(5,7));
        int dates = stoi(date.substr(8));
        
        cout<<year<<" "<<month<<" "<<dates<<'\n';
        map<int,int>mpp;
        
        mpp[1] = 31;
        mpp[2] = 28;
        mpp[3] = 31;
        mpp[4] = 30;
        mpp[5] = 31;
        mpp[6] = 30;
        mpp[7] = 31;
        mpp[8] = 31;
        mpp[9] = 30;
        mpp[10] =31;
        mpp[11] = 30;
        mpp[12] = 31;

        int days =dates;
        if(leap_check(year) == true)
        {
            mpp[2] = 29;
        }

        for(int i = 1; i < month ; i++)
           {
            cout<<mpp[i]<<'\n';
              days += mpp[i];
           }

        return days;
    }
};