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
    
    void buildArray(TreeNode* root, vector<int> &arr){
        if(!root) return;
        buildArray(root->left, arr);
        arr.push_back(root->val);
        buildArray(root->right, arr);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        buildArray(root, arr);
        return arr[k-1];
    }
};