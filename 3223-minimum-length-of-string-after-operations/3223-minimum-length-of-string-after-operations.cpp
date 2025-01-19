class Solution {
public:
    int minimumLength(string s) {
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        int ans=0;
        for(auto x:mp){
            int curr=x.second;
            while(curr>=3){
                curr=(curr%3)+(curr/3);
            }
            ans+=curr;
        }
        return ans;
    }
};