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
void pot(TreeNode*root,vector<int>&v){
    if(root==NULL)return ;
    pot(root->left,v);
    pot(root->right,v);
    v.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        pot(root,v);
        return v;
    }
};