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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        if(!root) return {};
        dugu(root,v,0);
        return v;
    }
    void dugu(TreeNode* root, vector<int> &v, int level){
        if(!root) return;
        if(level==v.size()) v.push_back(root->val);
        dugu(root->right,v,level+1);
        dugu(root->left,v,level+1);
    }
};