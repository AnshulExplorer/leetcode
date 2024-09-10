class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0;
       int mid=0;
       int high=nums.size()-1;
       //1) mid ke baare maoi sochna hai 
       //2) 0 to low -1 , high+1 to end->2
       while(mid<=high){
           if(nums[mid]==2){
               int temp=nums[mid];
               nums[mid]=nums[high];
               nums[high]=temp;
               high--;
           }
           else if(nums[mid]==0){
               int temp=nums[mid];
               nums[mid]=nums[low];
               nums[low]=temp;
               low++;
               mid++;
           }
           else mid++;
       }
        return ;
    }
};