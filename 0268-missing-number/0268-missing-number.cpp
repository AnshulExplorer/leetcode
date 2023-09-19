class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==mid){
                low=mid+1;
            }
            else if(nums[mid]!=mid){
                high=mid-1;
            }

        }
        return low;
    }
};