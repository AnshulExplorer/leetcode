class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            vector<int>temp;
            while(nums[i]!=0){
                temp.push_back(nums[i]%10);
                nums[i]/=10;
            }
            reverse(temp.begin(),temp.end());
            for(int j=0;j<temp.size();j++){
                ans.push_back(temp[j]);
            }
        }
        return ans;
    }
};