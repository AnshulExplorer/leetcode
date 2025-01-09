class Solution {
public:
    bool check(string &word,string &s){
        for(int i=0;i<word.size();i++){
            if(word[i]!=s[i])return false;
        }
        return true;
    }
    int countPrefixes(vector<string>& words, string s) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            if(check(words[i],s)){
                ans++;
            }
        }
        return ans;
    }
};