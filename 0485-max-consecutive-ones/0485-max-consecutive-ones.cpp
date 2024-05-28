class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)count++;
            else if(nums[i]==0){
                mx=max(count,mx);
                count=0;
            } 
        }
        mx=max(count,mx);
        return mx;
    }
};