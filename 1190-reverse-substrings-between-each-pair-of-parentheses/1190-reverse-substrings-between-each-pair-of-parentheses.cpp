class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')st.push(i);
            else if(s[i]==')'){
                int first=st.top()+1;
                int second=i;
                reverse(s.begin()+first,s.begin()+second);
                st.pop();
            }
        }
        for(auto x:s){
            if(x!='(' && x!=')')ans+=x;
        }
        return ans;
    }
};