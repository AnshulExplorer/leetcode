class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        for(int i=n-1;i>=0;){
            while(i>=0 && s[i]==' ')i--;
            string make="";
            while(i>=0 && s[i]!=' '){
                make+=s[i];
                i--;
            }
            reverse(make.begin(),make.end());
            if(!make.empty()){
                if(!ans.empty())ans+=' ';
                ans+=make;
            }
        }
        return ans;
    }
};