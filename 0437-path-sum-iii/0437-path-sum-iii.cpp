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
    if(!root)return 0;
     return count(root,targetSum)+
     pathSum(root->left,targetSum)+
     pathSum(root->right,targetSum);
    }
    int count(TreeNode* &root, long long targetSum){
        if(!root)return 0;
        int res=0;
        if(root->val==targetSum)res++;
        res+=count(root->left,targetSum-root->val);
        res+=count(root->right,targetSum-root->val);
        return res;
    }
};