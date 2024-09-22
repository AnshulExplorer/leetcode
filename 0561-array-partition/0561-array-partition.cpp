class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0,i=0;
        while(i<nums.size()){
            c+=nums[i];
            i+=2;
        }
        return c;
    }
};