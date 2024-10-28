class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)return 0;
        sort(nums.begin(),nums.end());
        int low=0,high=0,val=INT_MAX;
        while(high<n){
            if(high-low+1==k){
                int ans=nums[high]-nums[low];
                val=min(val,ans);
                low++;
            }
            else high++;
        }
        return val;
    }
};