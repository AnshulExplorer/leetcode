class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            unordered_set<char>st;
            int len=0;
            for(int j=i;j<s.size();j++){
                if(st.find(s[j])!=st.end()){
                    break;
                }
                st.insert(s[j]);
                len++;
            }
            ans=max(len,ans);
        }
        return ans;
    }
};