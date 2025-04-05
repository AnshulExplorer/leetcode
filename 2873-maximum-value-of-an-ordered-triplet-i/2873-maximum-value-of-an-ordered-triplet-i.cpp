class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n-1;j++){
               for(int k=j+1;k<n;k++){
                    long long t=(long long)(nums[i] - nums[j]) * nums[k];
                    ans=max(t,ans);
               }
            }
        }
        if(ans<0)return 0;
        return ans;
    }
};