class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int mod=1000000007;
        vector<long long>charcount(26,0);
        for(char c:s){
            charcount[c-'a']++;
        }
        for(int i=0;i<t;i++){
            vector<long long>newchar(26,0);
            for(int j=0;j<26;j++){
                if(j==25){
                    newchar[0]=(newchar[0]+charcount[j])%mod;
                    newchar[1]=(newchar[1]+charcount[j])%mod;
                }
                else{
                    newchar[j+1]=(newchar[j+1]+charcount[j])%mod;
                }
            }
            charcount=newchar;
        }
        long long ans=0;
        for(long long c:charcount){
            ans=(ans+c)%mod;
        }
        return ans;
    }
};