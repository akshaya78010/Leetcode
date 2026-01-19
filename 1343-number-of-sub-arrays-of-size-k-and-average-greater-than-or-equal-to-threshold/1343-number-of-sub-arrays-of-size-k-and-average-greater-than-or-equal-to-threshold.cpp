class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
     int county = 0;

     int i = 0;
     int j = k-1;

     int sumi = 0;
     for(int i =0; i < k ; i++){
        sumi += arr[i];
     }
    
     int n = arr.size();

     while(j < n){
        if((sumi/k) >= threshold){
            county += 1;
        }
        sumi -= arr[i];
        i+=1;
        j+=1;
        if(j < n)
        sumi += arr[j];
     }   

     return county;
    }
};