class Solution {
public:
    int minimumDeletions(string s) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(st.size()!=NULL && st.top()=='b' && s[i]=='a'){
                st.pop();
                ans++;
            }
            else{
                st.push(s[i]);
            }
        }
        return ans;
    }
};