class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k--){
            int mn=INT_MAX;
            int idx=101;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<mn){
                    mn=nums[i];
                    idx=i;
                }
            }
            nums[idx]=nums[idx]*multiplier;
        }
        return nums;
    }
};