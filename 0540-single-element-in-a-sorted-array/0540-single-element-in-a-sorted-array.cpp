class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int k=-1;
        int n=nums.size();
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[0]!=nums[1]){
            return nums[0];
        }
        for(int i=1;i<n;i++){
        //   if(nums[i]==nums[i-1] && nums[i]==nums[i+1])continue;
           if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
              k=nums[i];
          }
        }
        return k;
    }
};