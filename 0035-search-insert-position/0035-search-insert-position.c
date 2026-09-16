int searchInsert(int* arr, int n, int target) {
    
    int low = 0;
    int high = n-1;

    int mid = 0;
    int res = n;

    while(low <= high){
        mid = low + (high - low)/2;

        if(arr[mid] >= target){
            res = mid;
            high = high - 1;
        }
        else{
            low = low + 1;
        }
    }

    return res;
}