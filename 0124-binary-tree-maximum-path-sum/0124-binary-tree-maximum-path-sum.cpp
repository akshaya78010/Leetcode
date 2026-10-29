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
    int find_dia_sum(TreeNode *root , int &maxi){
        if(root == NULL) return 0;

        int left = find_dia_sum(root->left,maxi);
        int right = find_dia_sum(root->right , maxi);

        int val_to_add = root->val + max(0,left) + max(0,right);

        maxi = max(maxi, val_to_add);

       return root->val + max({0,left,right});
    }
    int maxPathSum(TreeNode* root) {
        
        int maxi = root->val;

        int res = find_dia_sum(root,maxi);

        return maxi;
    }
};