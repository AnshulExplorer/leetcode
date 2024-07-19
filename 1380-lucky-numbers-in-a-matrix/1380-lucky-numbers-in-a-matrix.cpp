class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        unordered_set<int>s;
        vector<int>ans;

        for(int i=0;i<n;i++){
            int MinELE=INT_MAX;
            for(int j=0;j<m;j++){
                MinELE=min(MinELE,matrix[i][j]);
            }
            s.insert(MinELE);
        }

        for(int j=0;j<m;j++){
            int MaxELE=-1;
            for(int i=0;i<n;i++){
                MaxELE=max(MaxELE,matrix[i][j]);
            }
           if(s.find(MaxELE)!=s.end())ans.push_back(MaxELE);
        }
        return ans;
    }
};