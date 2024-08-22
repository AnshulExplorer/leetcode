class Solution {
public:
    int findComplement(int num) {
        vector<int>a;
        while(num>0){
           a.push_back(num%2);      // add rem
           num/=2;
        }
        for(auto &x:a){
            x=(x==0) ? 1:0;
        }
        int n=a.size();
        int ans=0;
        for(int i=0;i<a.size();i++){
            ans += (1 << i)*a[i];
        }
        return ans;
    }
};