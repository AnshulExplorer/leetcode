class Solution {
public:
bool check(char ch){
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A'|| ch=='E'||ch=='I'|| ch=='O' || ch=='U');
}
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            while(i<j && check(s[i])==false){
                i++;
            }
            while(i<j && check(s[j])==false){
                j--;
            }
            swap(s[i],s[j]);
            i++,j--;
        }
        return s;
    }
};