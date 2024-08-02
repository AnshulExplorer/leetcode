class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
       for(auto x:nums){
            mp[x]++;   
       }
       int mj=INT_MIN;
       for(auto e:mp){
        if(e.second >n/2)return e.first;
       }
       return -1;
    }
};