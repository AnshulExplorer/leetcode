class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int sum=0;
        for(int i=1;i<n;i++){
            int as=int(s[i]);
            int pre=int(s[i-1]);
            sum += abs(as-pre);
        }
        return sum;
    }
};