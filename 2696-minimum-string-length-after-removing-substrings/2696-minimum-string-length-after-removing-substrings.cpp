class Solution {
public:
    int minLength(string s) {
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(st.size()==0){
                st.push(ch);
                continue;
            }
            else if(st.top()=='A' && ch=='B'){
                st.pop();
            }
            else if(st.top()=='C' && ch=='D'){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        return st.size();
    }
};