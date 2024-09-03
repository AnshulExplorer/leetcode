class Solution {
public:
    int getLucky(string s, int k) {
        int n=s.size();
        string ascii="";
        for(int i=0;i<n;i++){
            ascii+=to_string(s[i]-'a'+1);
        }
        // now transform by k times 
        int final=0;
        while(k>0){
            final=0;
            for(int i=0;i<ascii.size();i++){
                final += ascii[i]-'0';
            }
            ascii=to_string(final);
            k--;
        }
        return final;
    }
};