
class Solution {
public:
int levels(TreeNode*root){
    if(root==NULL)return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void nthlevel(TreeNode*root,int curr,int level,vector<int>&ans){
    if(root==NULL)return ;
    if(curr==level){
        ans[curr]=root->val;
        return ;
    }
    nthlevel(root->left,curr+1,level,ans);
    nthlevel(root->right,curr+1,level,ans);
}
    void levelsOrder(TreeNode*root,vector<int>&ans){
        int n=ans.size();
        for(int i=0;i<n;i++){
            nthlevel(root,0,i,ans);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans(levels(root),0);
        levelsOrder(root,ans);
        return ans;
    }
};