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
class BSTIterator {
public:
    stack<int>st;
    
    void inorder(TreeNode* root){
         if(root){
            inorder(root->right);
            st.push(root->val);
            inorder(root->left);
            }    
    }
    
    BSTIterator(TreeNode* root) {
       inorder(root);
    }
    
    int next() {
        if(!st.empty()){
           int x=st.top();
            st.pop();
            return x;
        }
        return -1;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */