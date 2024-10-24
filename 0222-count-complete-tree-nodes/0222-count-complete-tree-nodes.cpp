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
    int countNodes(TreeNode* root) {
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        int ans=0;
        q.push(root);
        while(!q.empty()){
            TreeNode*top=q.front();
            q.pop();
            ans++;
            if(top->left!=NULL)q.push(top->left);
            if(top->right!=NULL)q.push(top->right);
        }
        return ans;
    }
};