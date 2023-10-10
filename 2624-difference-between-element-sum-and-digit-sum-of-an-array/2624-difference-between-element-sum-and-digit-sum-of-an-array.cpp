class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int esum=0;
        int dsum=0;
        for(int i=0;i<n;i++){    // 11 2 15 3 4 
            esum+=nums[i];

            int currentnum=nums[i];
            while(currentnum>0){
                dsum+=currentnum % 10;
                currentnum/=10;          
            }
        } 
        
        return abs(esum-dsum);
        
    }
};