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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
     vector<vector<int>>res;
     vector<int>p;
     dugu(root, targetSum,res,p,0);
     return res;   
    }
    void dugu(TreeNode* root, int targetSum, vector<vector<int>> &res, vector<int> &p, int cs){
        if(!root)return;
        cs+=root->val;
        p.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr && cs==targetSum) res.push_back(p);
        dugu(root->left,targetSum,res,p,cs);
        dugu(root->right,targetSum,res,p,cs);
        p.pop_back();
    }
};