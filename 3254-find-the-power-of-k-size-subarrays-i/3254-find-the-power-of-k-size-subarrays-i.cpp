class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v(n-k+1,-1);
        for(int i=0;i<=n-k;i++){
            bool flag=true;
            for(int j=i;j<i+k-1;j++){
                if(nums[j]+1 != nums[j+1]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                v[i]=*max_element(nums.begin()+i,nums.begin()+i+k);
            }
        }
        if (k == 1) {
        for (int i = 0; i < n; i++) {
            v[i] = nums[i]; 
        }
    }
        return v;
    }
};