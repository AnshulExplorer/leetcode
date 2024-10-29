class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> v(3,vector<int> (3,-1));
        int n=moves.size();
        for(int i=0;i<n;i++){
            int row=moves[i][0];
            int col=moves[i][1];
            if(i%2==0){
                v[row][col]=1;
            }
            else v[row][col]=0;
        }
        for(int i=0;i<3;i++){             //row
            if(v[i][0]==-1)continue;
            if(v[i][0]==v[i][1] && v[i][0]==v[i][2]){
                return v[i][0]==1?"A":"B";
            }
        }
        for(int j=0;j<3;j++){             //col
            if(v[0][j]==-1)continue;
            if(v[0][j]==v[1][j] && v[0][j]==v[2][j]){
                return v[0][j]==1?"A":"B";
            }
        }
        if(v[0][0]==v[1][1] && v[0][0]==v[2][2] && v[0][0]!=-1 ){ //dia
            return v[0][0]==1?"A":"B";
        }
        if(v[0][2]==v[1][1] && v[0][2]==v[2][0] && v[0][2]!=-1){  
            return v[0][2]==1?"A":"B";
        }
        if(n==9)return "Draw";
        return "Pending";
    }
};