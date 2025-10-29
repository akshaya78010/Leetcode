class Solution {
public:
    int smallestNumber(int n) {
       int number_of_bits = 0;
       int number =0;
       int sumi =0;
    for(int i =0; i <= n ; i++)
    {
        sumi += pow(2,i);
        if(sumi >= n)
        {
           number_of_bits = i+1;
           number = sumi;
           break;
        }
    }
    return number;
    }
};