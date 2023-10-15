class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<int> v(m*n,0);  //created a new vector
        int k=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[k++]=matrix[i][j]; //insert element new vector
            }
        }
        int low=0;
        int high=m*n-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            if(v[mid]==target)return true;
            else if (v[mid] > target)high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};