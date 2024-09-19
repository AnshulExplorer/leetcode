class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      //finding pivot (change)
      int idx=-1;
      int n=nums.size();
      for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
        idx=i;
        break;
        }
    }
       if(idx==-1){           //if it is already greatest 
           reverse(nums.begin(),nums.end());
           return ;
       } 
       //2) sorting/reverse all after pivot
       reverse(nums.begin()+idx+1,nums.end());

       //3) finding the just greater element than idx 
       int j=-1;
       for(int i=idx+1;i<n;i++){
           if(nums[i]>nums[idx]){
               j=i;
               break;
           }
       }

       //4)swapping next element of idx (idx and j element)
       int temp=nums[idx];
       nums[idx]=nums[j];
       nums[j]=temp;
       return ;

    }
};