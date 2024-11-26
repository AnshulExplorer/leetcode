class Solution {
public:
void help(unordered_map<string,int>&mp,string &s,int k){
    int n=s.size();
    int p=n/k;
    int ans=0;
    while(k>0){
        string a=s.substr(ans,p);
        mp[a]++;
        ans+=p;
        k--;
    }
}
    bool isPossibleToRearrange(string s, string t, int k) {
        unordered_map<string,int>mp;
        unordered_map<string,int>mp2;
        if(s.size()!=t.size())return false;
        help(mp,s,k);
        help(mp2,t,k);
        for(auto x:mp){
            if(mp2.find(x.first)==mp2.end())return false;
            if((mp2[x.first])!=x.second)return false;
        }
        return true;
    }
};