class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        map<char,int>mp;
        for(auto x:s)mp[x]++;
        if(n>2){
            for(int i=1;i<n-1;i++){
                if(mp.find(s[i])!=mp.end()){
                    while(mp[s[i]]>2){
                        mp[s[i]]--;
                        mp[s[i]]--;
                        n-=2;
                    }
                }
            }
        }
        return n;
    }
};