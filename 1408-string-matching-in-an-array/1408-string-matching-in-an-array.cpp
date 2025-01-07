class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(auto x:words){
            for(int i=0;i<words.size();i++){
                if(words[i]!=x && words[i].find(x)!=-1){
                    ans.push_back(x);
                    break;
                }
            }
        }
        return ans;
    }
};