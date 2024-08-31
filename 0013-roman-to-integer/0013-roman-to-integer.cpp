class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                ans+=1;
            }
            else if(s[i]=='V'){
               if(i>0 && s[i-1]=='I'){
                   ans=-1;
                   ans+=4;
               }
            }
             else if(s[i]=='V'){
                ans+=5;
            }
             else if (s[i]=='X' && s[i+1]=='C'){
                ans+=90;
            }
            else if(s[i]=='M'){
                ans+=1000;
            }
            else if(s[i]=='C'&& s[i+1]=='M'){
                ans+=900;
                i+=2;
            }
        }
        return ans;
    }
};