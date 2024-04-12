class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> lmax(n,0);
        vector<int> rmax(n,0);
        int maxi =INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,height[i]);
            lmax[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            rmax[i]=maxi;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int mini=min(lmax[i],rmax[i])-height[i];
            ans+=abs(mini);
        }
        return ans;
    }
};