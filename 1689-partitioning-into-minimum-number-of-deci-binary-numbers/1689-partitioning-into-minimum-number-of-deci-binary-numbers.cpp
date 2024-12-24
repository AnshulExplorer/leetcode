class Solution {
public:
    int minPartitions(string s) {
        int n=s.size();
        int mx=0;
        for(char c:s){
            int num=c-'0';
            if(num>mx)mx=num;
        }
        return mx;
    }
};