class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();
        int mxEle=INT_MIN; 
        int mnEle=INT_MAX;
        int mxIdx=-1; 
        int mnIdx=-1;   
        for(int i=0;i<n;i++){           // for mx Ele
            if(arrays[i].back()>mxEle){
                mxEle=arrays[i].back();
                mxIdx=i;
            }
        }
        for(int i=0;i<n;i++){
            if(i!=mxIdx){
                if(mnEle<arrays[i][0]){
                    mnEle=arrays[i][0];
                }
            }
        } 
        int d1=mxEle-mnEle;

        mnEle=INT_MAX;
        for(int i=0;i<n;i++){
            if(arrays[i][0]<mnEle){
                mnEle=arrays[i][0];
                mnIdx=i;
            }
        }
        mxEle=INT_MIN;
        for(int i=0;i<n;i++){
            if(i!=mnIdx){
                if(arrays[i].back()>mxEle){
                    mxEle=arrays[i].back();
                }
            }
        }
        int d2=mxEle-mnEle;
        return max(d1,d2);
    }
};