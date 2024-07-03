class Solution {
public:
    int minDifference(vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        if(nums.size()<4)return 0;
        sort(nums.begin(),nums.end());
        ans=min(ans,abs(nums[n-4]-nums[0]));  //for largest 3 
        ans=min(ans,abs(nums[n-3]-nums[1]));   //for 2 large and 1 small
        ans=min(ans,abs(nums[2]-nums[n-2]));   // for 1 large and 1 small 
        ans=min(ans,abs(nums[n-1]-nums[3]));  //smallest ones 
        return ans;

    }
};