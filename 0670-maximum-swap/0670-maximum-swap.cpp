class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int n=s.size();
        string copy=s;
        int val=num;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(copy[i],copy[j]);
                int x=stoi(copy);
                val=max(x,val);
                copy=s;
            }
        }
        return val;
    }
};