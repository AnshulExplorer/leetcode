class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int count=0;
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    mp1[i]++;
                    mp2[j]++;
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1 && (mp1[i]>1 || mp2[j]>1)){
                    count++;
                }
            }
        }
        return count;
    }
};