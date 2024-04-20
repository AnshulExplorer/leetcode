class Solution {
public:
void dfs(vector<vector<int>>&land,int i,int j,int &r,int &c){
    int rows=land.size();
    int cols=land[0].size();
    //base case
    if(i<0 || i>=rows || j<0 ||j>=cols || land[i][j]==0){
        return ;
    }
    r=max(i,r);
    c=max(j,c);
    land[i][j]=0;
    dfs(land,i-1,j,r,c);
    dfs(land,i,j+1,r,c);
    dfs(land,i+1,j,r,c);
    dfs(land,i,j-1,r,c);
}
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int row=land.size();
        int col=land[0].size();
        vector<vector<int>>ans;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(land[i][j]==1){
                    int r=0;
                    int c=0;
                    dfs(land,i,j,r,c);
                    vector<int>res={i,j,r,c};
                    ans.push_back(res);
                }
            }
        }
        return ans;
    }
};