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
    int res=INT_MIN;
    int maxPathSum(TreeNode* root) {
       
        dugu(root);
        return res;
    }
    int dugu(TreeNode* root){
        if(!root) return 0;
        int l = max(0,dugu(root->left));
        int r =max(0,dugu(root->right));
        int currentpath=l+root->val+r;
        res=max(res,currentpath);
        return root->val+max(l,r);
    }
};