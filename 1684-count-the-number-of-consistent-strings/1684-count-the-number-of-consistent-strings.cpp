class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st(allowed.begin(),allowed.end());
        int ans=0;
        for(auto x:words){
            bool flag=true;
            for(int j=0;j<x.size();j++){
                if(st.find(x[j])==st.end()){
                    flag=false;
                    break;
                }
            }
            if(flag==true)ans++;
        }
        return ans;
    }
};