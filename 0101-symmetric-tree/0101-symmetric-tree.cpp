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
    bool isSymmetric(TreeNode* root) {
      return treet(root->left,root->right);
    }
    bool treet(TreeNode* p, TreeNode* q){
        if(p==nullptr && q==nullptr) return true;
        if(p == nullptr ||  q==nullptr) return false;
        if(p->val==q->val) return treet(p->left,q->right) && treet(p->right,q->left);
        return false;
    }
};