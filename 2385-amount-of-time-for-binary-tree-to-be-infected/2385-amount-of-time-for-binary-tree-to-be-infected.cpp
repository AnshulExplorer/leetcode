class Solution {
public:
    TreeNode* first = NULL;
    void markParent(TreeNode* root,
        unordered_map<TreeNode*, TreeNode*>& parent) {
        if (root == NULL)
            return;
        if (root->left != NULL)
            parent[root->left] = root;
        if (root->right)
            parent[root->right] = root;
        markParent(root->left, parent);
        markParent(root->right, parent);
    }
    void find(TreeNode* root, int start) {
        if (root == NULL)
            return;
        if (root->val == start) {
            first = root;
            return;
        }
        find(root->left, start);
        find(root->right, start);
    }
    int amountOfTime(TreeNode* root, int start) {
        find(root, start); // step 1

        unordered_map<TreeNode*, TreeNode*> parent;
        markParent(root, parent); // step 2

        unordered_set<TreeNode*> s;
        s.insert(first); // step 3 imp
        queue<pair<TreeNode*, int>> q;
        q.push({first, 0});
        // bfs
        int maxLevel = 0;
        while (q.size() > 0) {
            pair<TreeNode*, int> p = q.front();
            q.pop();
            TreeNode* temp = p.first;
            int level = p.second;
            maxLevel = max(maxLevel, level);

            if (temp->left) {
                if (s.find(temp->left) == s.end()) {
                    q.push({temp->left, level + 1});
                    s.insert(temp->left);
                }
            }
            if (temp->right) {
                if (s.find(temp->right) == s.end()) {
                    q.push({temp->right, level + 1});
                    s.insert(temp->right);
                }
            }
            if (parent.find(temp) != parent.end()) {
                if (s.find(parent[temp]) == s.end()) {
                    q.push({parent[temp], level + 1});
                    s.insert(parent[temp]);
                }
            }
        }
        return maxLevel;
    }
};