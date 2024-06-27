class Solution {
public:
    int maxTree(TreeNode* root){
        if(root==NULL)return INT_MIN;
        return max(root->val,max(maxTree(root->left),maxTree(root->right)));
    }
    int minTree(TreeNode* root){
        if(root==NULL)return INT_MAX;
        return min(root->val,min(minTree(root->left),minTree(root->right)));
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true;
        else if(root->val <= maxTree(root->left))return false;
        else if(root->val >= minTree(root->right))return false;
        return isValidBST(root->left) || isValidBST(root->right);
    }
};