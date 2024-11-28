class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==1)return 0;
        for(int i=0;i<s.size();i++){
            bool check=true;
            for(int j=0;j<s.size();j++){
                if(i!=j && s[i]==s[j]){
                    check=false;
                    break;
                }
            }
            if(check)return i;
        }
        return -1;
    }
};