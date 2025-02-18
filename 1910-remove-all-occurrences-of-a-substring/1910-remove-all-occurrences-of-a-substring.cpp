class Solution {
public:
    string removeOccurrences(string s, string part) {
        int f=s.find(part);
        while(f!=-1){
            string ans="";
            for(int i=0;i<s.size();i++){
                if(i==f){
                    i+=part.size()-1;
                }
                else ans+=s[i];
            }
            s=ans;
            f=s.find(part);
        }
        return s;
    }
};