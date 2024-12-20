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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int lvl=0;
        while(!q.empty()){
            int n=q.size();
            vector<TreeNode*>v;
            while(n--){
                TreeNode*t=q.front();
                q.pop();
                v.push_back(t);
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            if(lvl%2==1){
                int l=0;
                int r=v.size()-1;
                while(l<r){
                    swap(v[l++]->val,v[r--]->val);
                }
            }
            lvl++;
        }
        return root;
    }
};