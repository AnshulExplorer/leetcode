class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        for(int i=2;i<arr.size();i++){
            if(arr[i] % 2!=0){   // particular ele odd check for other two 
                if(arr[i-1] % 2!=0){
                    if(arr[i-2]%2!=0){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};