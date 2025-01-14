class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int>st,st2;
        int ans=0;
        vector<int>v;
        for(int i=0;i<A.size();i++){
            if(st2.count(A[i])){
                ans++;
            }
            st.insert(A[i]);
            if(st.count(B[i])){
                ans++;
            }
            st2.insert(B[i]);
            v.push_back(ans);
        }
        return v;
    }
};