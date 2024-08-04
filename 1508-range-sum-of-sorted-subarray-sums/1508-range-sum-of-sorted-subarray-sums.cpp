class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>newarray;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum += nums[j];
                newarray.push_back(sum);
            }
        }
        sort(newarray.begin(),newarray.end()); // 1 2 3 3 4 5 6 7 9 10
        long long S=0;
        for(int i=left-1;i<right;i++)S+=newarray[i];
        return S % (1000000007);
    }
};