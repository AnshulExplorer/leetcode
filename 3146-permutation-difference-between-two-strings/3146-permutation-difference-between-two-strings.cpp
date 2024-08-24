class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int count=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]=i;
        }
        for(int i=0;i<t.length();i++){
            count+= abs(i-mp[t[i]]);
        }
        return count;
    }
};