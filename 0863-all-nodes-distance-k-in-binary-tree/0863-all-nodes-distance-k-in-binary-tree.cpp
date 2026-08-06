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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        unordered_map<int,TreeNode*>m;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                auto top=q.front();
                q.pop();

                if(top->left){
                    m[top->left->val]=top;
                    q.push(top->left);
                }
                if(top->right){
                    m[top->right->val]=top;
                    q.push(top->right);
                }
            }
        }

        unordered_map<int,int>v;
        q.push(target);
        
        while(k-- && !q.empty()){
            int s=q.size();
            for(int i=0;i<s;i++){
                auto top = q.front();
                q.pop();
                v[top->val]=1;
                if(top->left && !v[top->left->val]){
                    q.push(top->left);
                }
                if(top->right && !v[top->right->val]){
                    q.push(top->right);
                }
                if(m[top->val] && !v[m[top->val]->val]){
                    q.push(m[top->val]);
                }
            }
        }

        while(!q.empty()){
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};