class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        for(auto x:nums)st.insert(x);
        vector<int>ans(st.begin(),st.end());
        if(ans.size()<3)return ans[ans.size()-1];
        else return ans[ans.size()-3];
    }
};