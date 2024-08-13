class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int ans=0;
        while(low<high){
            int distance=high-low;
            int contain=min(height[low],height[high]);
            int area=contain*distance;
            ans=max(ans,area);
            if(height[low]<height[high])low++;
            else high--;
        }
        return ans;
    }
};