class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int ans=0;
        if(n1%2!=0){
            for(auto ele:nums2){
                ans^=ele;
            }
        }
        int ans2=0;
        if(n2%2!=0){
            for(auto ele:nums1){
                ans2^=ele;
            }
        }
        return ans^ans2;
    }
};