class Solution {
public:
int reverse(int a){
    int r=0;
    while(a>0){
        r*=10;
        r+=(a % 10); //reverse
        a /= 10;  
    }
    return r;
}
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int r=reverse(nums[i]);
            nums.push_back(r);
        }
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        return s.size();
    }
};