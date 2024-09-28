class Solution {
public:
    long long maximumTotalSum(vector<int>& arr) {
        sort(arr.begin(),arr.end(),greater<int>());
        int ht=arr[0];
        long long s=0;
        for(int i=0;i<arr.size();i++){
            ht=min(ht,arr[i]);
            if(ht<=0)return -1;
            s+=ht;
            ht--;
        }
        return s;
    }
};