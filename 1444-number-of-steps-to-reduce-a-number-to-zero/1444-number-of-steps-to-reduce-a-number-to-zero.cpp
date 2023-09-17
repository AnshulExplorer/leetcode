class Solution {
public:
int go(int n){
    if(n==0)return 0;
    if(n % 2==0){
        return 1 + go(n/2);
    }
    return 1 + go(n-1); 
}
    int numberOfSteps(int num) {
       return go(num);
    }
};