
class Solution {
public:
int sum=0;
void helper(TreeNode* root,int check){
    if(root==NULL)return ;
    if(root->left==NULL && root->right==NULL && check==-1){
        sum+=root->val;
    }
    helper(root->left,-1);
    helper(root->right,+1);
}
    int sumOfLeftLeaves(TreeNode* root) {
        helper(root,0);
        return sum;
    }
};