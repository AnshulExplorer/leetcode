class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(m==0 || n==0)return false;
        int sum=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum+=grid[i][j];
            }
        }
        //row 
        int r=0;
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n;j++){
                r+=grid[i][j];
            }
            int req=sum-r;
            if(r==req)return true;
        }
        int c=0;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m;j++){
                c+=grid[j][i];
            }
            int req=sum-c;
            if(c==req)return true;
        }
        return false;
    }
};