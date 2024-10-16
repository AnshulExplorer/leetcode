class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        int n=haystack.size(),m=needle.size();
        int i=0,j=0;
        while(i<n && j<needle.size()){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            }
            else {
                i=i-j+1;
                j=0;
            }
            if(m==j){
                ans=i-j;
                break;
            }
        }
        return ans;
        
    }
};