class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<double>ans;
        for(auto x:nums1)ans.push_back(x);
        for(auto x:nums2)ans.push_back(x);
        sort(ans.begin(),ans.end());
        int size=ans.size();
        if(size % 2==0){
            return (ans[size/2-1]+ans[size/2])/2.0;
        }
        else {
            return ans[size/2];
        }
    }
};