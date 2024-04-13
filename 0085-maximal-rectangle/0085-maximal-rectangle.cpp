class Solution {
public:
int largestRectangleArea(vector<int>&height){
    int maxArea=INT_MIN;
    int n=height.size();
    stack<int>st;
    for(int i=0;i<=n;i++){
        while(!st.empty() && (i==n || height[st.top()]>=height[i])){
            int h=height[st.top()];
            st.pop();
            int width;
            if(st.empty()){
                width=i;
            }
            else{
                width=i-st.top()-1;
            }
            maxArea=max(maxArea,width*h);
        }
        st.push(i);
    }
    return maxArea;
}
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int maxArea=INT_MIN;
        vector<int> height(c,0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]=='1'){
                    height[j]+=1;
                }
                else height[j]=0;
            }
            int area=largestRectangleArea(height);
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};