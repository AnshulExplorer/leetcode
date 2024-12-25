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
    void call(vector<int>&temp,TreeNode*root){
        if(root==NULL)return ;
        call(temp,root->left);
        temp.push_back(root->val);
        call(temp,root->right);
    }
    int closesmallest(int ele,vector<int>&t){
        int lo=0,hi=t.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(t[mid]<=ele){
                ans=t[mid];
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
    int closelargest(int ele,vector<int>&t){
        int lo=0,hi=t.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(t[mid]>=ele){
                ans=t[mid];
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        int n=queries.size();
        vector<vector<int>>ans;
        vector<int>t;
        call(t,root);
        for(auto ele:queries){
            int mn=closesmallest(ele,t);
            int mx=closelargest(ele,t);
            ans.push_back({mn,mx});
        }
        return ans;
    }
};