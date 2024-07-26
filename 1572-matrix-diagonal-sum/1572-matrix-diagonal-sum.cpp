class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++){
            sum += mat[i][i];
        }
        for(int j=0;j<n;j++){
            if(j!=n-1-j){
                sum += mat[j][n-1-j];
            }
        }
        return sum;
    }
};