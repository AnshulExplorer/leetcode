class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        bool flag=false;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(auto x:mp1){
            if(mp2.find(x.first)!=mp2.end() && x.second==mp2[x.first]){
                flag=true;
            }
            else {
                flag=false;
                break;
            }
        }
        return flag;

    }
};