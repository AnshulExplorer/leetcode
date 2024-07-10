class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        int currentT=0;
        double Total=0.0;
        for(int i=0;i<n;i++){
            int arriveT=customers[i][0];
            int cookT=customers[i][1];
            currentT=max(currentT,arriveT);
            
            int finishT=currentT + cookT;
            int WT= (finishT-arriveT);
            Total += WT;
            currentT=finishT;
        }
        return Total/n;
    }
};