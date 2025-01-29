class Solution {
public:
    void dfs(int r,int c,int &m,int &n,int &count,vector<vector<int>> &grid){
        // basecase
        if(r<0||c<0 ||r>=m||c>=n || grid[r][c]==0)return ;
        //magic 
        count+=grid[r][c];
        grid[r][c]=0;
        //call
        dfs(r+1,c,m,n,count,grid);
        dfs(r,c+1,m,n,count,grid);
        dfs(r-1,c,m,n,count,grid);
        dfs(r,c-1,m,n,count,grid);
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int r,c=0;
        int ans=0;
        int m=grid.size(),n=grid[0].size();
        for(r=0;r<m;r++){
            for(c=0;c<n;c++){
                if(grid[r][c]!=0){
                    int count=0;
                    dfs(r,c,m,n,count,grid);
                    ans=max(ans,count);
                } 
            }
        }
        return ans;
    }
};