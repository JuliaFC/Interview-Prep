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
    
    void sumPath(TreeNode* root,  int sum, vector<int> partialRes, vector<vector<int>> &res) {
        if(!root) {            
            return;
        }
        partialRes.push_back(root->val);
        if(root->val == sum && root->left == NULL && root->right == NULL){
            res.push_back(partialRes);
         
        }
        
        sumPath(root->left, sum - root->val, partialRes, res);
        sumPath(root->right, sum - root->val, partialRes, res);
    }
     
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> partialRes;
        vector<vector<int>> res;
        sumPath(root, sum, partialRes, res);
        
        return res;
    }
};
