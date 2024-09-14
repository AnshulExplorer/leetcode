class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,mxlen=0;
        int mxele=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mxele){
                mxele=nums[i];
                ans=0,mxlen=0;
            }
            if(mxele==nums[i]){
                mxlen++;
            }
            else mxlen=0;
            ans=max(mxlen,ans);
        }
        return ans;
    } 
};