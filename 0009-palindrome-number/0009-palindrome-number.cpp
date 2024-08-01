class Solution {
public:
    bool isPalindrome(int a) {
        if(a<0)return false;
        int org=a;
        int b=0;
        while(a>0){
            int ld=a%10;
            b = (b*10)+ld;
            a/=10;
        }
        return (org==b);
    }
};