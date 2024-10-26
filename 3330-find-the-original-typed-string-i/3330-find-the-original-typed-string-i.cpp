class Solution {
public:
    int possibleStringCount(string word) {
        int i=0,ans=1;
        int n=word.length()-1;
        while(i<n){
            if(word[i]==word[i+1])ans++;
            i++;
        }
        return ans;
    }
};