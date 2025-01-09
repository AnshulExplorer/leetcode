class Solution {
public:
    bool check(char &c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    } 
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>pre(n+1);
        pre[0]=0;
        for(int i=0;i<n;i++){
            if(check(words[i][0]) && check(words[i].back())){
                pre[i+1]=pre[i]+1;
            }
            else pre[i+1]=pre[i];
        }
        int s=queries.size();
        vector<int>ans(s);
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            ans[i]=pre[r+1]-pre[l];
        }
        return ans;
    }
};