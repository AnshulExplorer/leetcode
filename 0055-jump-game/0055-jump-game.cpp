class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        int jumps=0;
        if(size<=1)return true;
        for(int i=0;i<size;i++){
            if(jumps<0){
                return false;
            }
            jumps=max(jumps,nums[i])-1;
        }
        return true;
    }
};