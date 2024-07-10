class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(i);         //1 2 3 4 5
        }
        int j=0;                      // current position
        while(ans.size()>1){
            j=(j+k-1) % ans.size();   //circular manner 
            ans.erase(ans.begin()+j);
        }
        return ans[0];
    }
};