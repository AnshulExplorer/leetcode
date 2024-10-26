class Solution {
public:
    string finalString(string s) {
        string ans="";
        for(int ele:s){
            if(ele!='i'){
                ans+=ele;
            }
            else if(ele=='i'){
                reverse(ans.begin(),ans.end());
            }
        }
        return ans;
    }
};