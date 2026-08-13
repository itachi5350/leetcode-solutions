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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();

                if(node->left && node->right){
                    if(node->left->val==x && node->right->val==y)return false;
                    if(node->left->val==y && node->right->val==x) return false;
                }
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);

            }

            bool fx=false, fy=false;

            queue<TreeNode*>temp=q;
            while(!temp.empty()){
            if(temp.front()->val==x) fx=true;
            if(temp.front()->val==y) fy=true;
            temp.pop();
            }

            if(fx && fy) return true;
            if(fx || fy) return false;
        }
        
        return false;
    }
};