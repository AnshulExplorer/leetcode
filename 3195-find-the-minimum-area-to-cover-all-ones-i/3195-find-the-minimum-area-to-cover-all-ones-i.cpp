class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int top=-1,bottom=-1,left=-1,right=-1;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(top==-1)top=i;
                    bottom=i;
                }
            }
        } //for top and bottom
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[j][i]==1){
                    if(left==-1)left=i;
                    right=i;
                }
            }
        }
        int area= (right-left+1)*(bottom-top+1);
        return area;
    }
};