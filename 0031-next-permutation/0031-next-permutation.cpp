class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        int val=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                val=nums[i];
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        //
        int k=-1;
        for(int j=idx+1;j<n;j++){
            if(nums[j]>val){
                if(k==-1 || nums[j]<nums[k]){
                    k=j;
                }
            }
        }
        swap(nums[k],nums[idx]);
        sort(nums.begin()+idx+1,nums.end());
        return;
    }
};