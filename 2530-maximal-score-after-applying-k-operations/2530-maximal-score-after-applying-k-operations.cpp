class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int>p;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        while(k!=0){
            long long tp=p.top();
            p.pop();
            sum+=tp;
            p.push(ceil(tp/3.0));
            k--;
        }
        return sum;
    }
};