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
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        return dugu(root,targetSum)+pathSum(root->left,targetSum)+pathSum(root->right,targetSum);
    }
    int dugu(TreeNode* root, long long tsum){
        if(!root) return 0;
        int count=0;
        if(root->val==tsum) count++;
        count+=dugu(root->left,tsum-root->val);
        count+=dugu(root->right,tsum-root->val);
        return count;
    }
};