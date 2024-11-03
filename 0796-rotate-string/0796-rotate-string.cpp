class Solution {
public:
    bool rotateString(string s, string goal) {
        int idx=0;
        if(s.size()!=goal.size())return false;
        for(int i=0;i<s.size();i++){
            if(s[i]==goal[0]){
                idx=0;
                bool flag=true;
                for(int j=i;j<s.size();j++){
                    if(s[j]!=goal[idx]){
                        flag=false;
                        break;
                    }
                    idx++;
                }
                for(int j=0;j<i && flag;j++){
                    if(goal[idx]!=s[j]){
                    flag=false;
                    break;
                }
                    idx++;
                }
                if(flag==true)return true;
            }
        }
        return false;
    }
};