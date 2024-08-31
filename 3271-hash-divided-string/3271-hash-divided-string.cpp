class Solution {
public:
    string stringHash(string s, int k) {
        int n=s.length();
        string result="";
        for(int i=0;i<n;i+=k){
            string S=s.substr(i,k);
            int finalAdd=0;
            for(char ch:S){
                int add=ch-'a';
                finalAdd+=add;
            }
            int hash=finalAdd%26;
            char c= hash+'a';
            result+=c;
        }
        return result;
    }
};