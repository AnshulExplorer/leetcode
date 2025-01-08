class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int>pre(n+1);
        int ans=0;
        pre[0]=0;
        for(int i=1;i<=n;i++){
            pre[i]=gain[i-1]+pre[i-1];
            ans=max(ans,pre[i]);
        }
        return ans;
    }
};