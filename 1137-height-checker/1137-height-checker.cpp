class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int count=0;
        vector<int>comparing=heights;
        sort(comparing.begin(),comparing.end());
        for(int i=0;i<comparing.size();i++){
            if(comparing[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};