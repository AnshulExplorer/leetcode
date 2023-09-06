class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        vector<char> ans(n);
        for(int i=0;i<indices.size();i++){
           ans[indices[i]]=s[i];           
        }
        string result(ans.begin(),ans.end());
        return result;       
    }
};