class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin(),in.end());
        vector<vector<int>>ans;
        int s=in[0][0];
        int e=in[0][1];
        for(int i=1;i<in.size();i++){
            int cs=in[i][0];
            int ce=in[i][1];
            if(cs>e){
                ans.push_back({s,e});
                s=cs;
                e=ce;
            }
            else if(cs<=e){
                e=max(ce,e);
            }
        }
        ans.push_back({s,e});
        return ans;
    }
};