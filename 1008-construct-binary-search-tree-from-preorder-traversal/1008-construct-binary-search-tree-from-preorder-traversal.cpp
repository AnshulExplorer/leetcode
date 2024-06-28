class Solution {
public:
    void insert(TreeNode* root,int val){
        if(root==NULL)root=new TreeNode(val);
        else if(root->val > val){   //left
            if(root->left==NULL){
                root->left=new TreeNode(val);  //insert
            }
            else {
                insert(root->left,val);    //call
            }
        }
        else{            //right
            if(root->right==NULL){
                root->right=new TreeNode(val);
            }
            else{
                insert(root->right,val);
            }
        }
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n=preorder.size();
        TreeNode*root=new TreeNode(preorder[0]);
        for(int i=1;i<n;i++){
            insert(root,preorder[i]);
        }
        return root;
    }
};