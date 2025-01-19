class Solution {
public:
    int minimumLength(string s) {
        int n=s.size(),ans=0;
        map<char,int>mp;
        for(auto x:s)mp[x]++;
        for(auto x:mp){
            if(x.second%2==0){
                ans+=2;
            }
            else ans++;
        }
        return ans;
    }
};