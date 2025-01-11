class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k>s.size())return false;
        else if(k==s.size())return true;
        unordered_map<char,int>mp;
        for(auto x:s){mp[x]++;}
        int ans=0;
        for(auto x:mp){
            if(x.second%2!=0)ans++;
        }
        return ans<=k;
    }
};