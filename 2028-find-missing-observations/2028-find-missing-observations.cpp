class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int sum=mean*(m+n);  // total sum
        int Ksum=0;
        for(int i=0;i<m;i++){
            Ksum+=rolls[i];   // known sum
        }
        int missingSum=sum-Ksum;  // missing sum
        if(missingSum<n*1 || missingSum>n*6){
            return {};
        }

        vector<int>ans(n,1);
        missingSum-=n;
        for(int i=0;i<n && missingSum>0;i++){
            int incr=min(5,missingSum);
            ans[i]+=incr;
            missingSum-=incr;
        }
        return ans;
    }
};