/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void dfs(TreeNode* root,int val,int currdepth,int depth){
    if(root==NULL)return ;
    //base 
    if(currdepth==depth-1){
        TreeNode*leftside =root->left; //store leftside node in pointer
        root->left=new TreeNode(val); //making new node then adding value
        root->left->left=leftside;  //connection

        //right traverse
        TreeNode*rightside=root->right;
        root->right=new TreeNode(val);
        root->right->right=rightside;
    }
    //traversal
    dfs(root->left,val,currdepth+1,depth); //leftside traverse
    dfs(root->right,val,currdepth+1,depth); //rightside traverse
}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        //case 1 when depth ==1
        if(depth==1){
            TreeNode* temp=new TreeNode(val);
            temp->left=root;
            return temp;
        }
        //case 2 if depth is not equal to one 
        dfs(root,val,1,depth);
        return root;
    }
};