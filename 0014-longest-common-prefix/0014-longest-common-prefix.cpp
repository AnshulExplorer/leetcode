class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int m=strs[0].size();
        int n=strs.size();
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                if(strs[0][i]!=strs[j][i]){
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};