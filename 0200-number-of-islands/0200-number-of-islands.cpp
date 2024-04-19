class Solution {
public:
void mark_visited(vector<vector<char>> &grid,int i,int j,int row,int col){
    if(i<0 || i>=row || j<0 ||j>=col || grid[i][j]!='1'){
        return ;
    }
    grid[i][j]='2'; //mark as visited
    mark_visited(grid,i+1,j,row,col);  //down
    mark_visited(grid,i,j+1,row,col);  //right
    mark_visited(grid,i-1,j,row,col);  //up
    mark_visited(grid,i,j-1,row,col);  //left
}
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int row=grid.size();
        int col=grid[0].size();
        if(row==0)return 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    mark_visited(grid,i,j,row,col);
                    ans++;
                }
            }
        }
        return ans;
    }
};