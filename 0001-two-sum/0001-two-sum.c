int* twoSum(int* arr, int n, int t,int* r) {
    *r = 2;
  int  *result = (int*)malloc(*r * sizeof(int));
   for(int i = 0 ;i < n ;i++){
    for(int  j = i+1 ; j < n ; j++){
if(arr[i] + arr[j] == t){
    result[0] = i;
    result[1] = j;
    return result;}}}
   *r = 0;
    return NULL;}