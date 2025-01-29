class Solution {
public:
    void dfs(int i,int j,int &c,vector<vector<int>>& grid){
        //basecase
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0){
            return ;
        }
        //magic
        c++;
        grid[i][j]=0;
        //calls
        dfs(i+1,j,c,grid);
        dfs(i,j+1,c,grid);
        dfs(i-1,j,c,grid);
        dfs(i,j-1,c,grid);

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    int c=0;
                    dfs(i,j,c,grid);
                    ans=max(c,ans);
                }
            }
        }
        return ans;
    }
};