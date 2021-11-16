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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;
        if(root->val > key)
            root->left=deleteNode(root->left, key);
        else if(root->val < key)
            root->right=deleteNode(root->right, key);
        else{ // root->val ==  key
            
            // leaf node
            if(!root->left && !root->right){
                delete(root);
                return NULL;
            }
            
            // only one child
            if(!root->left || !root->right){
                TreeNode* ret = root->left? root->left : root->right;
                delete(root);
                return ret;
            }
            
            // two children, find min of right subtree
            TreeNode* temp=root->right;
            while(temp && temp->left)
                temp=temp->left;
            
            //updating and deleting node
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
        return root;
    }
};