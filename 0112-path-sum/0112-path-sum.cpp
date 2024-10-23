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
    bool helper(int sum,TreeNode*root,int target){
        if(root==NULL)return false;
        if(root->left==NULL && root->right==NULL){
            sum+=root->val;
            if(sum==target)return true;
        }
        return helper(sum+root->val,root->left,target) || helper(sum+root->val,root->right,target);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return helper(sum,root,targetSum);
    }
};