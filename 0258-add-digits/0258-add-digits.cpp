class Solution {
public:
    int helper(int num){
        if(num<10)return num;
        string s=to_string(num);
        int add=0;
        for(int i=0;i<s.size();i++){
            int change=s[i]-'0';
            add+=change;
        }
        return helper(add);  
    }
    int addDigits(int num) {
        int ans=helper(num);
        return ans;
    }
};