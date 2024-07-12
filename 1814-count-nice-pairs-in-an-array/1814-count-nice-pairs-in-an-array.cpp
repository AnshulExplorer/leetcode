class Solution {
public:
int rev(int n){
    int r=0;
    while(n>0){
        r*=10;
        r+=(n % 10);
        n/=10;
    }
    return r;
}
    int countNicePairs(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-rev(nums[i]);  //transform
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int x=nums[i];
            if(mp.find(x)!=mp.end()){
                count=count % 1000000007;
                count+=mp[x];
                mp[x]++;
            }
            else mp[x]++;
    
        }
        return count%1000000007;
    }
};