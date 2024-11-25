class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m=box.size();
        int n=box[0].size();
        vector<vector<char>>act(n,vector<char>(m,'.'));
        for(int i=0;i<m;i++){
            int stone=0;
            for(int j=0;j<n;j++){
                if(box[i][j]=='#')stone++;
                else if(box[i][j]=='*'){
                    act[j][m-1-i]='*';

                    int a=j-1;
                    while(stone>0){
                        act[a][m-1-i]='#';
                        stone--;
                        a--;
                    }
                }
            }
            int a=n-1;
            while(stone>0){
                act[a][m-1-i]='#';
                stone--;
                a--;
            }
        }
        return act;
    }
};