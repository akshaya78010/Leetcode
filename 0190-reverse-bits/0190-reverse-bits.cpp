class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int>arr;
        for(int i = 0; i < 32 ; i++)
        {
              arr.push_back(n%2);
              n = n/2;
        }
        // int i = 0; 
        // int j = 31;
        // reverse(arr.begin(),arr.end());
       // vector<int>arr2(arr.rbegin(),arr.rend());

    //    for(int i =0; i < arr.size() ; i++){
    //     cout<<arr[i]<<" ";
    //    }

        n = 0;
         uint32_t num = 0;
        for(int i =0 ; i < arr.size() ; i++)
        {
            num  = num * 2 + arr[i];
        }
        return num;
    }
};