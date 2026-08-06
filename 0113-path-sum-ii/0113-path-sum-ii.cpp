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
        vector<int>path;
        dugu(res,path,0,root,targetSum);
        return res;
    }
    void dugu(vector<vector<int>> &res, vector<int> &path, int csum, TreeNode* &root, int tsum){
        if(!root) return;
        csum+=root->val;
        path.push_back(root->val);
        if(!root->left && !root->right && csum==tsum){
            res.push_back(path);
        }  
        dugu(res,path,csum,root->left,tsum);
        dugu(res,path,csum,root->right,tsum);
        path.pop_back();
    }
};