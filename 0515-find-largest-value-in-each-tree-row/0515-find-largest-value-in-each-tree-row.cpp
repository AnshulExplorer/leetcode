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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<int>v;
        while(!q.empty()){
            int n=q.size();
            int value=INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode*t=q.front();
                q.pop();
                if(t->val > value){
                    value=t->val;
                }
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
            v.push_back(value);  
        }
        return v;
    }
};