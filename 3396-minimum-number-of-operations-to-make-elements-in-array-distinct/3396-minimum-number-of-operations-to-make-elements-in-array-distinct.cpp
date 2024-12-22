class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums)mp[x]++;
        int n=nums.size();
        int ans=0;
        int idx=0;
        while(idx<n){
            bool flag=false;
            for(auto x:mp){
                if(x.second>1){
                    flag=true;
                    for(int i=0;i<3;i++){
                        if(mp.find(nums[idx])!=mp.end()){
                            mp[nums[idx]]--;
                            if(nums[idx]==0)mp.erase(nums[idx]);
                        }
                        idx++;
                    }
                    ans++;
                    break;
                }
            }
            if(!flag)return ans;
        }
        return ans;
    }
};