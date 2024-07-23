bool comp(pair<int,int>&a,pair<int,int>&b){
    if(a.second==b.second)return a.first > b.first;
    return a.second<b.second;
}
class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int ele:nums){
            mp[ele]++;
        }
        vector<pair<int,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),comp);
        vector<int>ans;
        for(auto ele :v){
            while(ele.second > 0){
                ans.push_back(ele.first);
                ele.second--;
            }
        }
        return ans;
    }
};