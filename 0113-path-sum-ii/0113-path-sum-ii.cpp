
class Solution {
public:
void helper(TreeNode*root,vector<int>v,vector<vector<int>>&ans,int sum){
    if(root==NULL)return ;
    if(root->left==NULL && root->right==NULL){
        if(root->val==sum){
            v.push_back(root->val);
            ans.push_back(v);
        }
        return ;
    }
    v.push_back(root->val);
    helper(root->left,v,ans,sum-(root->val));
    helper(root->right,v,ans,sum-(root->val));
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        vector<vector<int>>ans;
        helper(root,v,ans,targetSum);
        return ans;
    }
};