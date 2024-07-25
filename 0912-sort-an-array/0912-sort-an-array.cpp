class Solution {
public:
void merge(vector<int>&nums,int low,int mid,int hi){
    vector<int>temp;
    int i=low,j=mid+1;
    while(i<=mid && j<=hi){
        if(nums[i]<nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else {
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=hi){
        temp.push_back(nums[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        nums[low+k]=temp[k];
    }
}
void mergeSort(vector<int>&nums,int start,int end){
    if(start>=end)return ;
    int mid=start+(end-start)/2;
    mergeSort(nums,start,mid);
    mergeSort(nums,mid+1,end);
    merge(nums,start,mid,end);
}
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};