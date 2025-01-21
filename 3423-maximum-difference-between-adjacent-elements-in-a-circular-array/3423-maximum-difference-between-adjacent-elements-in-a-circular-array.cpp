class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int c=abs(nums[i]-nums[i+1]);
            if(c>ans){
                ans=c;
            }
        }
        int c=abs(nums[0]-nums[n-1]);
        if(c>ans){
            ans=c;
        }
        return ans;
    }
};