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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)return nullptr;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*top=q.front();
            q.pop();
            swap(top->left,top->right);
            if(top->left!=NULL)q.push(top->left);
            if(top->right!=NULL)q.push(top->right);
        }
        return root;
    }
};