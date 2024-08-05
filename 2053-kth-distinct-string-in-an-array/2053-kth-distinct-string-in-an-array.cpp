class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string>ans;
        unordered_map<string,int>mp;
        for(auto x : arr)mp[x]++;
        for (auto a : arr) {
            if (mp[a] == 1) {
                ans.push_back(a);
            }
        }
        if(k<=ans.size())return ans[k-1];
        return "";
    }
};