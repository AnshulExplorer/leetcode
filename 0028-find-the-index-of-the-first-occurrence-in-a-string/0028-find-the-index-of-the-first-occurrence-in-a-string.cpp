class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0,j=0;
        int val=-1;
        while(i<haystack.size() && j<needle.size()){
            if(haystack[i]==needle[j]){
                i++,j++;
            }
            else if(haystack[i]!=needle[j]){
                i=i-j+1;
                j=0;
            }
            if(needle.size()==j){
                val=(i-j);
                break;
            }
        }
        return val;
    }
};