class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        vector<int>v;
        for(auto it:arr){
            mp[it]++;
        }
        int ans=1;
        for(auto x:mp){
            mp[x.first]=ans;
            ans++;
        }
        for(int i=0;i<n;i++){
            v.push_back(mp[arr[i]]);
        }
        return v;
    }
};