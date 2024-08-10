class Solution {
public:
    int pivotInteger(int n) {
        int preSum=0;
        int postSum=n*(n+1)/2;  // 36
        for(int i=1;i<=n;i++){
            preSum+=i;
            if(preSum==postSum)return i;
            postSum-=i;
        }
        return -1;
    }
};