class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n){
            k=k%n;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);    //1 2 3 4 5 6 7
        }
        for(int i=0;i<k;i++){
            nums[i]=ans[n-k+i];   // 5 6 7
        }
        for(int i=0;i<n-k;i++){
            nums[k+i]=ans[i];
        }
        return ;
    }
};