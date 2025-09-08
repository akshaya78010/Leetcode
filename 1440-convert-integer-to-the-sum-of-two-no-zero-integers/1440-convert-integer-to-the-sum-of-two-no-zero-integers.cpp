class Solution {
public:

    bool is_non_zero(int n)
    {
        bool flag = true;
        while(n > 0){
            if(n%10 == 0)
            {
                flag = false;
                break;
            }
           n/=10;
        }

        return flag;
    }
    vector<int> getNoZeroIntegers(int n) {
        
        int num1;
        int num2;
        for(int i = 1 ; i <= n ; i++)
        {
           if(is_non_zero(i) && is_non_zero(n-i))
           {
            num1 = i;
            num2 = n-i;
            break;
           }
        }

        return {num1,num2};
    }
};