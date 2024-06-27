class Solution {
public:
    int sum=0;
    void reverseIn(TreeNode*root){
        if(root==NULL)return ;
        reverseIn(root->right);
        root->val += sum;
        sum =root->val;
        reverseIn(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        reverseIn(root);
        return root;
    }
};