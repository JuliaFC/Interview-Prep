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
    
    bool sumPath(TreeNode* root,  int sum) {
        if(!root) {            
            return false;
        }
        
        if(root->val == sum && root->left == NULL && root->right == NULL) return true;
        
        return sumPath(root->left, sum - root->val) || sumPath(root->right, sum - root->val);
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        
        return sumPath(root, sum);
    }
};