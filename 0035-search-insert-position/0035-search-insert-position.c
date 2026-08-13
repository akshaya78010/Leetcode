int searchInsert(int* arr, int n, int target) {
    int index;
    for(int i = 0 ;i < n ; i++)
    {
        if(arr[i] == target || arr[i] > target)
        {
            index = i;
            break;
        }
    }
    return index;
}