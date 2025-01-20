class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        // pre compute
        map<int,int>row;
        map<int,int>col;
        for(int i=1;i<=m;i++)row[i]=0;
        for(int i=1;i<=m;i++)col[i]=0;
        map<int,pair<int,int>>mp;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mp[mat[i][j]]={i,j};
            }
        }
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end()){
                int one=mp[arr[i]].first;
                int two=mp[arr[i]].second;
                row[one]++;
                col[two]++;
                if(row[one]==n||col[two]==m)return i;
            }
        }
        return -1;
    }
};