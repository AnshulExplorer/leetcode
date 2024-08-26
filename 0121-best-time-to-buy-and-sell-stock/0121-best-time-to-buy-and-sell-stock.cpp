class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal=prices[0];
        int maxProfit=0;
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-minVal;
            maxProfit=max(maxProfit,profit);
            minVal=min(prices[i],minVal);
        }
        return maxProfit;
    }
};