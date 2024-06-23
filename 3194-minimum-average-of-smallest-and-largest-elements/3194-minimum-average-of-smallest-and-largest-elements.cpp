class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<double>Avg;
        int i=0,j=n-1;
        while(i<=j){
            double  mine=nums[i];
            double maxe=nums[j];
            double avg=(mine+maxe)/2;
            Avg.push_back(avg);
            i++,j--;
        }
        sort(Avg.begin(),Avg.end());
        return Avg[0];
    }
};