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
string ans="~"; // for finding the maximum
void dfs(TreeNode* root,string s){
    if(!root)return ;
    if(!root->left && !root->right){
        ans=min(ans,char('a'+root->val)+s);  //base conditions
    }
    dfs(root->left,char('a'+ root->val)+s);
    dfs(root->right,char('a'+ root->val)+s);
}
    string smallestFromLeaf(TreeNode* root) {
        dfs(root,"");
        return ans;
    }
};