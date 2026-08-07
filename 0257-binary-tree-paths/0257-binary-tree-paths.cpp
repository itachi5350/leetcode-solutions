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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        string s;
        dugu(root,res,s);
        return res;
    }
    void dugu(TreeNode* root,vector<string> &res, string s){
        if(!root) return;
        if(!s.empty()) s+="->";
        s+=to_string(root->val);
        if(!root->left && !root->right) {
            res.push_back(s);
            return;
        }
        dugu(root->left, res,s);
        dugu(root->right ,res,s);
    }
};