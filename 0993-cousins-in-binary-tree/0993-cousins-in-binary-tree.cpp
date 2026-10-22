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

        bool x_present = false;
        bool y_present = false;

        q.push(root);
        TreeNode *curr;
        while(!q.empty()){
            int siz = q.size();

            x_present = false;
            y_present = false;
            for(int i = 0; i < siz ; i++){
            curr = q.front();
            q.pop();

            if(curr->left && curr->right){
            if((curr->left->val == x && curr->right->val == y) || (curr->right->val == x && curr->left->val == y)){
                return false;
            }
            }

            if(curr->left){
                if(curr->left->val == x) x_present = true;
                if(curr->left->val == y) y_present = true;
                q.push(curr->left);
            }
            if(curr->right){
                if(curr->right->val == x) x_present = true;
                if(curr->right->val == y) y_present = true;
                q.push(curr->right);
            }
            }

            if(x_present && y_present) return true;
        }

        return false;
    }
};