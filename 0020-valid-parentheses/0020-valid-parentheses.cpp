class Solution {
public:
    bool isValid(string s) {
        int n=s.size(),i=0;
        string st="";
        while(i<n){
            if(s[i]==']' || s[i]=='}' || s[i]==')'){
                if(st.empty())return false;
                if((s[i]==')' && st.back()=='(') || (s[i]=='}'&& st.back()=='{') || (s[i]==']' && st.back()=='[')){
                    st.pop_back();
                }
                else return false;
            }
            else {
                st+=s[i];
            }
            i++;
        }
        return st.empty();
    }
};