class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int part=n/3;
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto x:nums)mp[x]++;
        for(auto x:mp){
            if(x.second > part){
                v.push_back(x.first);
            }
        }
        return v;
    }
};