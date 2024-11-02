class Solution {
public:
    bool isCircularSentence(string s) {
        vector<string>st;
        string a="";
        for(int i=0;i<s.size();i++){
           if(s[i]!=' '){
               a+=s[i]; 
           }
           else{
             st.push_back(a);
             a="";
           }
        }
        if(a.size()!=NULL)st.push_back(a);
        // leetcode exercise sound delightful
        int siz=st.size();
        if(siz==1){
            return st[0][0]==st[0].back();
        }
        if(st[0][0]!=st[siz-1].back())return false;
        for(int i=0;i<st.size()-1;i++){
            if(st[i].back()!=st[i+1][0])return false;
        }
        return true;
        
    }
};