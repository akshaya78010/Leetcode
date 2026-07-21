class Solution {
public:
    void merge(vector<int>&nums,int low,int high,int mid){
        int i =low ;
        int j = mid+1;

        int k =0 ;
        vector<int>temp(high - low+1);
        while(i <= mid && j <= high){
            if(nums[i] <= nums[j]){
                temp[k++] = nums[i++];
            }
            else{
                temp[k++] = nums[j++];
            }
        }
        
        while(i <= mid){
              temp[k++] = nums[i++];
        }

        while(j <= high){
             temp[k++] = nums[j++];
        }

        k = 0;
        for(int a = low ; a <= high ; a++){
            nums[a] = temp[k++];
        }
    }
    void mergeSort(vector<int>&nums,int low,int high){
        if(low >= high){
            return;
        }

        int mid = low + (high - low)/2;
        
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);

        merge(nums,low,high,mid);
    }
    vector<int> sortArray(vector<int>&nums) {
        mergeSort(nums,0,nums.size() - 1);
        return nums;
    }
};