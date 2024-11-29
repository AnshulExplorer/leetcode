class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre(n);
        vector<int> suff(n);
        //prefix (left)
        int p=nums[0];
        pre[0]=1;
        for(int i=1;i<n;i++){
            pre[i]=p;
            p *= nums[i];
        }
        //suffix (right)
        p=nums[n-1];
        suff[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suff[i]=p;
            p*=nums[i];
        }
        // pre[i] = pre[i]*suff[i]
        for(int i=0;i<n;i++){
            pre[i]=pre[i]*suff[i];
        }
       return pre;
    }
};