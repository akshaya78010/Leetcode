class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        map<string,int>mpp;
        for(int i =0;i <  nums.size() ; i++)
        {
            mpp[nums[i]]+=1;
        }
        int n = nums.size();
        string new_str = "";
        for(int i =0 ; i < n ; i++)
        {
            new_str+='0';
        }
        if(mpp[new_str] == 0)
        {
            return new_str;
        }
        char ch;
        for(int i =0; i < n ; i++)
        {

            if(new_str[i] == '0'){
            new_str[i] = '1';
            ch = '0';
            }
            else if(new_str[i] == '1')
            {
            new_str[i] = '0';
            ch = '1';
            }

            if(mpp[new_str] <= 0)
            {
                break;
            }

                new_str[i] = ch;
        }
        return new_str;
    }
};