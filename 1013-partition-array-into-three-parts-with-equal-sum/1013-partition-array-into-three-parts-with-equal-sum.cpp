class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int s=accumulate(arr.begin(),arr.end(),0); 
        int n=arr.size();
        if(s%3)return false;
        int part=s/3;
        int ans=0,count=0;
        for(int i=0;i<arr.size();i++){
            ans+=arr[i];
            if(ans==part){
                ans=0;
                count++;
            }
        }
        if(count>=3)return true;
        return false;
    }
};