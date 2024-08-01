class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int org=x;
        vector<int>ans;
        while(x>0){
            int ld=x%10;
            ans.push_back(ld);
            x/=10;
        }
        vector<int>b=ans;
        reverse(ans.begin(),ans.end());
        return (ans==b);
    }
};