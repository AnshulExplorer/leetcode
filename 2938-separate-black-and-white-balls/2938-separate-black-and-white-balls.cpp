class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0;
        int i=0;
        int j=s.size()-1;
        while(i<j){
            while(i<j && s[i]=='0')i++;
            while(i<j && s[j]=='1')j--;
            ans+=(j-i);
            i++,j--;
        }
        return ans;
    }
};