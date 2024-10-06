class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxSum=0;
        double preSum=0;
        for(int i=0;i<k;i++){
            preSum+=nums[i];
        }
        maxSum=preSum;
        int n=nums.size();
        int j=k,i=0;
        while(j<n){
            double curr=preSum+nums[j]-nums[i];
            if(curr>maxSum){
                maxSum=curr;
            }
            preSum=curr;
            i++,j++;
        }
        return maxSum/k;
    }
};