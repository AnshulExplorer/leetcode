class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        vector<int> ans;
        for(int j=0;j<arr2.size();j++){
            for(int i=0;i<n;i++){
                if(arr2[j]==arr1[i]){
                    ans.push_back(arr1[i]);
                    arr1[i]=-1;
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int k=0;k<n;k++){
            if(arr1[k]>=0){
                ans.push_back(arr1[k]);
            }
        }
        return ans;
    }
};