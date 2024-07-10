class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;       
        for(int i=0;i<logs.size();i++){ 
            string s=logs[i];
            if(s== "../"){
                if(st.size()!=0)st.pop();
            }
            else if(s!="./"){
                st.push(s);
            }
        }
        
        return st.size();
    }
};