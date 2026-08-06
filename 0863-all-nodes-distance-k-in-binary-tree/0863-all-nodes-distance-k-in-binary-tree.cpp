/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
      vector<int>arr;
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        dfs(root,target,k);
        return arr;
    }
    void dugu(TreeNode* root, int k){
        if(!root || k<0) return;
        if(k==0) {
            arr.push_back(root->val);
            return;
        }
        dugu(root->left,k-1);
        dugu(root->right,k-1);
    }
    int dfs(TreeNode* root, TreeNode* target, int k){
        if(!root) return -1;
        if(root ==target){
            dugu(root,k);
            return 0;
        }
        int l=dfs(root->left,target,k);
        if(l!=-1){
            if(l+1==k) arr.push_back(root->val);
        else {
            dugu(root->right,k-l-2);
        }
        return 1+l;
        }
        int r=dfs(root->right,target,k);
        if(r!=-1){
            if(r+1==k) arr.push_back(root->val);
        else {
            dugu(root->left,k-r-2);
        }
        return 1+r;
        }
        return -1;
    }
};