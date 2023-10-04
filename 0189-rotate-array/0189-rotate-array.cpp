class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int> v;
       int n=nums.size();
       if(k>n){
           k=k%n;
       }
       for(int i=0;i<n;i++){
           v.push_back(nums[i]);          //1 2 3 4 5 6 7 copy 
       }
       for(int i=0;i<k;i++){
           nums[i]=v[n-k+i];       //5 6 7 
       }
       for(int i=0;i<n-k;i++){
           nums[i+k]=v[i];
       }
       return ;
    }
};