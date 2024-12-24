class Solution {
public:
    void call(vector<vector<int>>&mat,int i,int j){
        for(int a=0;a<mat[0].size();a++){
            mat[i][a]=0;
        }
        for(int a=0;a<mat.size();a++){
            mat[a][j]=0;
        }
    }
    void setZeroes(vector<vector<int>>& mat) {
        vector<pair<int,int>>v;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0)v.push_back({i,j});
            }
        }
        for(auto x:v){
            call(mat,x.first,x.second);
        }
    }
};