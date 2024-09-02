class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long ans=accumulate(chalk.begin(),chalk.end(),0LL);
        k=k%ans;
        long long i=0;
        while(k>=chalk[i]){
            k-=chalk[i];
            i++;
        }
        return i;
    }
};