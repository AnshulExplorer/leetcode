class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]!=mp2[t[i]])return false;
            mp[s[i]]=i+1;
            mp2[t[i]]=i+1;
        }
        return true;
    }
};