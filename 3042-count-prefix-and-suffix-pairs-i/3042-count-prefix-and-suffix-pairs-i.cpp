class Solution {
public:
    bool isPreSuff(string a, string b){
        if(a.size()>b.size())return false;
        for(int i=0;i<a.size();i++)if(a[i]!=b[i])return false;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[b.size()-a.size()+i])return false;
        }
        return true;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(isPreSuff(words[i],words[j])){
                    ans++;
                }
            }
        }
        return ans;
    }
};