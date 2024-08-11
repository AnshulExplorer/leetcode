class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int Gas=accumulate(begin(gas),end(gas),0);
        int Cost=accumulate(begin(cost),end(cost),0);
        if(Cost>Gas)return -1;
        int start=0;
        int GasRemain=0;
        for(int i=0;i<n;i++){
            GasRemain += (gas[i]-cost[i]);
            if(GasRemain<0){
                start=i+1;
                GasRemain=0;
            }
        }
        return start;
    }
};