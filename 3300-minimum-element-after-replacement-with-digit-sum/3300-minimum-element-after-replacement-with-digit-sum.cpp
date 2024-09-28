class Solution {
public:
    int minElement(vector<int>& nums) {
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int s=0;
            while(nums[i]>0){
                s+=nums[i]%10;
                nums[i]/=10;
            }
            mn=min(s,mn);
        }
        return mn;
    }
};