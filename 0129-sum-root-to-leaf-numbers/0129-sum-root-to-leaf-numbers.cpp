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
#define ll long long
class Solution {
    ll ans=0;
    void dfs(TreeNode* root,ll val){
    if(!root){
        return ;
    }
    val *=10;
    val +=root->val;
    if(!root->left && !root->right){
        ans+=val;
        return ;
    }
    dfs(root->left,val);
    dfs(root->right,val);
}
public:
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        dfs(root,0);
        return ans;
    }
};