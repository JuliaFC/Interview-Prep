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
    int res = 0;
    
    void searchKth(TreeNode* root, int &k){
        if(root->left) searchKth(root->left, k);
        k--;
        if(k == 0){
            res = root->val;
            return;
        }
        if(root->right) searchKth(root->right, k);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        searchKth(root, k);
        return res;
    }
};