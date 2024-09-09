class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector< vector<int> >arr(n,vector<int>(n));
        int minr=0;
        int maxr=n-1;
        int minc=0;
        int maxc=n-1;
        int count=1;
        while(minr<=maxr && minc<=maxc){
            for(int j=minc;j<=maxc;j++){
                arr[minr][j]=count++;         //right            
            }
            minr++;
            if(minr > maxr || minc > maxc)break;

            for(int i= minr;i<=maxc;i++){
                arr[i][maxc]=count++;           //down
            }
            maxc--;
            if(minr > maxr || minc > maxc)break;

            for(int j=maxc;j>=minc;j--){          //left
                arr[maxr][j]=count++;
            }
            maxr--;
            if(minr > maxr || minc > maxc)break;

            for(int i=maxr;i>=minr;i--){
                arr[i][minc]=count++;                //up
            }
            minc++;
            if(minr > maxr || minc > maxc)break;

        }
         return arr;
    }
};