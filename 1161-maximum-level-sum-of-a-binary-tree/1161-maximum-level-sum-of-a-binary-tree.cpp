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
    int maxLevelSum(TreeNode* root) {
        
        int maxi = root->val;
        int max_level = 1;
        queue<TreeNode*>q;
        q.push(root);
        int siz = 0;
        int sumi = 0;
        TreeNode *node = NULL;
        int level = 0;
        while(!q.empty()){
            level += 1;
            sumi = 0;
            siz = q.size();

            // cout<<"hello"<<'\n';
            for(int i =0; i < siz ; i++){
                node = q.front();
                sumi += node->val;
                q.pop();

               if(node->left != NULL) q.push(node->left);
               if(node->right != NULL) q.push(node->right);
            }
            
            
           if(maxi < sumi){
            maxi = sumi;
            max_level = level;
           }
        }

        return max_level;
    }
};