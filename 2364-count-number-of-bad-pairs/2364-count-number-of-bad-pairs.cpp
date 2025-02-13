class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size(),gp=0;
        long long t=n*(n-1)/2;
        map<long long , long long>mp;
        for(int i=0;i<n;i++){
            long long d=nums[i]-i;
            gp+=mp[d];
            mp[d]++;
        }
        return t-gp;
    }
};