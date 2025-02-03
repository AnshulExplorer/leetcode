class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1;
        for(int i=0;i<nums.size()-1;i++){
            int l=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i] && nums[j]>nums[j-1]){
                    l++;
                }
                else break;
            }
            ans=max(ans,l);
        }
        int a=1;
        for(int i=0;i<nums.size()-1;i++){
            int l=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[i] && nums[j]<nums[j-1]){
                    l++;
                }
                else break;
            }
            a=max(l,a);
        }
        return max(a,ans);
    }
};