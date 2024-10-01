class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row=board.size();
        int col=board[0].size();
        vector<vector<int>>ans=board;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int live=0;
                if(i>0){
                    if(ans[i-1][j]==1){  // top
                        live++;
                    }
                    if(j>0){        // top left cor
                        if(ans[i-1][j-1]==1){
                            live++;
                        }
                    }
                }
                if(i+1 < row){
                    if(ans[i+1][j]==1){ // down
                        live++;
                    }
                    if(j+1<col){
                        if(ans[i+1][j+1]==1){  //down rt corner
                            live++;
                        }
                    }
                }
                if(j+1<col){
                    if(ans[i][j+1]==1){  //right
                        live++;
                    }
                    if(i>0){
                        if(ans[i-1][j+1]==1){  // top rt corn
                            live++;
                        }
                    }
                }
                if(j>0){
                    if(ans[i][j-1]==1){  //left
                        live++;
                    }
                    if(i+1<row){
                        if(ans[i+1][j-1]==1){  //left down cor
                            live++;
                        }
                    }
                }
                if(board[i][j]==0){
                    if(live==3)board[i][j]=1;
                }
                else{
                    if(live<2 || live>3){
                        board[i][j]=0;
                    }
                }
            }
        }
    }
};