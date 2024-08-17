class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int S=0,mx=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            S+=nums[i];
            mx=max(mx,S);
            if(S<0)S=0;
        }
        return mx;
    }
};