class Solution {
public:
bool fun(int low,int high,string &s){
    if(low>=high)return true;
    if(!isalnum(s[low]))return fun(low+1,high,s);
    if(!isalnum(s[high]))return fun(low,high-1,s);
    if(tolower(s[low])!=tolower(s[high]))return false;
    return fun(low+1,high-1,s);
}
    bool isPalindrome(string s) {
        int n=s.size();
        if(n==0)return true;  
        return fun(0,n-1,s);;
    }
};