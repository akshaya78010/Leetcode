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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        
        queue<TreeNode*>q;
        q.push(root);
        vector<long long>arr;
        long long sumi = 0;
        int siz = 0;
        int level = 0;
       
        TreeNode *node = NULL;
        while(!q.empty()){
            sumi = 0;
            level += 1;
            siz = q.size();
            // q.pop();

            for(int i =0; i < siz ; i++){
                node = q.front();
                sumi += node->val;
                // cout<<node->val<<" ";
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            // cout<<"sumi: "<<sumi<<'\n';
            arr.push_back(sumi);
        }

        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());

        if(arr.size() < k){
            return -1;
        }

        // for(int i= 0; i < arr.size() ; i++){
        //     cout<<arr[i]<<" ";
        // }

        return arr[k-1];
    }
};