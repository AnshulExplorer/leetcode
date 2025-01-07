class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int miss=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]<1)continue;
            if(nums[i]==miss){
                miss++;
            }
            else if(nums[i]>miss)break;
        }
        return miss;
    }
};