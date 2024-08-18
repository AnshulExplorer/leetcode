class Solution {
public:
    int nthUglyNumber(int n) {
        set<long>s;
        long nthnum=1;
        s.insert(nthnum);
        for(int i=0;i<n;i++){
            nthnum=*s.begin();
            s.erase(nthnum);
            s.insert(nthnum*2);
            s.insert(nthnum*3);
            s.insert(nthnum*5);
        }
        return nthnum;
    }
};