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
     
    int sumNumbers(TreeNode* root) {
       return dugu(root,0);
     
    }

    int dugu(TreeNode* root, int curr){
        if(!root) return 0;
        curr=curr*10 + root->val;
        if(!root->left && !root->right) return curr;
        return dugu(root->left,curr)+dugu(root->right,curr);
    }
};