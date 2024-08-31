class Solution {
public:
    void value(int num,int arr[4]){
        for(int i=3;i>=0;i--){
            arr[i]=num%10;
            num/=10;
        }
    } 
    int generateKey(int num1, int num2, int num3) {
        int arr1[4],arr2[4],arr3[4];
        value(num1,arr1);
        value(num2,arr2);
        value(num3,arr3);
        int k=0;
        for(int i=0;i<4;i++){
            int mn=min({arr1[i],arr2[i],arr3[i]});
            k=k*10+mn;
        }
        return k;
    }
};