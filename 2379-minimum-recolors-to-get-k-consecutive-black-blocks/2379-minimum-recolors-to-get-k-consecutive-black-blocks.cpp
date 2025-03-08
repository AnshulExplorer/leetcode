class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int ans=k;
        for(int i=0;i<=n-k;i++){
            int tw=0;
            for(int j=i;j<i+k;j++){
                if(blocks[j]=='W'){
                    tw++;
                }
            }
            ans=min(tw,ans);
        }
        return ans;
    }
};