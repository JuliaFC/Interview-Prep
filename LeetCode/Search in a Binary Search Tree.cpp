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
    TreeNode* searchBST(TreeNode* root, int val) {
        stack<TreeNode*> st;
        TreeNode *cur;
        
        st.push(root);
        while(!st.empty()) {
            
            cur = st.top();
            st.pop();
              
            if(!cur) return NULL;
            
            if(cur->val == val) return cur;
            
            else if(val < cur->val) st.push(cur->left);
            
            else st.push(cur->right);
        }
        
        return cur;
    }
};