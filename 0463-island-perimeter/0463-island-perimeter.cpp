class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    ans+=4;
                    if(i>0 && grid[i-1][j]==1)ans--;    //up
                    if(j>0 && grid[i][j-1]==1)ans--;   //left
                    if(i<grid.size()-1 && grid[i+1][j]==1)ans--;  //dowm
                    if(j<grid[0].size()-1 && grid[i][j+1]==1)ans--;  //right
                }
            }
        }
        return ans;
    }
};