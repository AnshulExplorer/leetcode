class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int res=INT_MAX;
        for(int i=1;i<n;i++){           
            res=min(res,arr[i]-arr[i-1]);           
        }
        vector<vector<int>>ans;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]==res){
                ans.push_back({arr[i-1],arr[i]});
            }
        }
        return ans;
    }
};