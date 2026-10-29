/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool check(TreeNode* leftNode, TreeNode* rightNode) {
        if(!leftNode && !rightNode) return true;

       if(leftNode == NULL || rightNode == NULL) return false;

       if(leftNode ->val != rightNode->val) return false;

        bool check_left = check(leftNode->left, rightNode->right);
        bool check_right = check(leftNode->right, rightNode->left);

        return check_left && check_right;
    }
    bool isSymmetric(TreeNode* root) {

        if ((root->left == NULL && root->right != NULL) ||
            (root->left != NULL && root->right == NULL) &&
                ((root->left && root->right) &&
                 (root->left->val != root->right->val))) {
            return false;
        }

        return check(root->left, root->right);
    }
};