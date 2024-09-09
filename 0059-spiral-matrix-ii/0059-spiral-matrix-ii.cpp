class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int minr=0,maxr=n-1;
        int minc=0,maxc=n-1;
        int count=1;
        while(minr<=maxr && minc<=maxc){
            for(int i=minc;i<=maxc;i++){
                ans[minr][i]=count;
                count++;
            }
            minr++;
            if(minr>maxr || minc>maxc)break;

            for(int i=minr;i<=maxr;i++){
                ans[i][maxc]=count;
                count++;
            }
            maxc--;
            if(minr>maxr || minc>maxc)break;

            for(int i=maxc;i>=minc;i--){
                ans[maxr][i]=count;
                count++;
            }
            maxr--;
            if(minr>maxr || minc>maxc)break;

            for(int i=maxr;i>=minr;i--){
                ans[i][minc]=count;
                count++;
            }
            minc++;
            if(minr>maxr || minc>maxc)break;
        }
        return ans;
    }
};