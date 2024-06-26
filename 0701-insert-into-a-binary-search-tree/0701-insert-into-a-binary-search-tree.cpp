
class Solution {
public:
void insert(TreeNode*root,int val){
    if(root==NULL)root=new TreeNode(val);
     else if(root->val > val){   //left
        if(root->left==NULL){
            TreeNode*temp=new TreeNode(val);
            root->left=temp;
        }
        else insert(root->left,val);
    }
    else {    //right
        if(root->right==NULL){
            TreeNode*temp=new TreeNode(val);
            root->right=temp;
        }
        else insert(root->right,val);
    }
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        insert(root,val);
        if(root==NULL)root=new TreeNode(val);
        return root;
    }
};