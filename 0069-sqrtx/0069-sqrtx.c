int mySqrt(int x) {
 long long int low = 0;
 long long int high = x;
 long long int mid;
 long long int last_res;
 while(low <= high){
    mid = low + (high - low)/2;
    // last_res = mid;

    if(mid * mid == x){
        return mid;
    }
    else if(mid * mid < x){
        last_res = mid;
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
 }   
   return last_res;
}