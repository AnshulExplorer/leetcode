
class Solution {
public:
    void helper(TreeNode*root,int val){
       if(root==NULL)root=new TreeNode(val);
       else if(root->val > val){
            if(root->left==NULL){
                TreeNode*temp=new TreeNode(val);
                root->left=temp;
            }
            else helper(root->left,val);
       }
       else {   // root->val < val
            if(root->right==NULL){
                TreeNode*temp=new TreeNode(val);
                root->right=temp;
            }
            else helper(root->right,val);
       }
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        helper(root,val);
        if(root==NULL)root= new TreeNode(val);
        return root;
    }
};