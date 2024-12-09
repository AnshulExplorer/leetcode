class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int>st;
        for(auto x:banned)st.insert(x);
        int ans=0;
        int sum=0;
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                if((sum+i)>maxSum)return ans;
                else{
                    sum+=i;
                    ans++;
                }
            }
        }
        return ans;
    }
};