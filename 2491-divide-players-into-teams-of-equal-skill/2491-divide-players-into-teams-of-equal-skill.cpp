class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());
        int i=0,j=n-1;
        long long mnSum=skill[0]+skill[n-1];
        vector<long long>v;
        while(i<j){
            if(skill[i]+skill[j]!=mnSum){
                return -1;
            }
            long long pro=skill[i]*skill[j];
            v.push_back(pro);
            i++,j--;
        }
        long long ans=accumulate(v.begin(),v.end(),0LL);
        return ans;
    }
};