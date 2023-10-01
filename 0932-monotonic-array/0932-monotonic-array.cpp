class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       bool increasing =true;
       bool decreasing =true;
       for(int i=1;i<nums.size();i++){
           if(nums[i]>nums[i-1]){
               decreasing = false;
           }
           else if(nums[i]<nums[i-1]){
               increasing = false;
           }
           if(!decreasing && !increasing) return false; //no inc and no dec so false; 

       }
       return true;

    }
};