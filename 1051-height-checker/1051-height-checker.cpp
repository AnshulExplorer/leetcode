class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int ans=0;
        vector<int>sortedcopy=heights;
        sort(sortedcopy.begin(),sortedcopy.end());
        for(int i=0;i<n;i++){
            if(heights[i]!=sortedcopy[i])ans++;
        }
        return ans;
    }
};