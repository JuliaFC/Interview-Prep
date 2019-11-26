/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    
    vector<int> visit(Node *root) {
        vector<int> res;
        stack<Node *> s;
        s.push(root);
        
        while(!s.empty()) {

           root = s.top();
           s.pop();
            if(root){
                res.push_back(root->val);

                for(auto n : root->children) {
                    s.push(n);
                }    
            }
        }
        reverse(res.begin(), res.end());
        return res;
        
    }
    
    vector<int> postorder(Node* root) {
       return visit(root);
        
    }
};