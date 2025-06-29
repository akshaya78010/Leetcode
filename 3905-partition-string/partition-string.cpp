class Solution {
public:
    vector<string> partitionString(string s) {
        int n = s.size();
        map<string,int>mpp;
        vector<string>arr;

        int i =0;
        mpp[""] = 1;
        while(i < n)
            {
                string str;
                str = string(1,s[i]);
                i+=1;
                while(mpp[str] > 0 && i < n)
                    {
                        str = str + s[i];
                        i+=1;
                    }

                if(mpp[str] == 0)
                {
                    mpp[str] += 1;
                    arr.push_back(str);
                }
            }
        return arr;
    }
};
