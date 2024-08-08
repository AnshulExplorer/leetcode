class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=-1;
                int e=-1;
                        for(int i=0;i<nums.size();i++){
                                    if(nums[i]==target){
                                                    s=i;
                                                                    break;
                                                                                }
                                                                                        }
                                                                                                for(int j=nums.size()-1;j>=0;j--){
                                                                                                            if(nums[j]==target){
                                                                                                                            e=j;
                                                                                                                                            break;
                                                                                                                                                        }
                                                                                                                                                                }
                                                                                                                                                                        return {s,e};
    }
};