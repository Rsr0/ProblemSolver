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
    TreeNode* curr=new TreeNode(0); // dummy
    
    void helper(TreeNode* root){
        if(root){
            helper(root->left);
            root->left=NULL;
            curr->right=root;
            curr=root;
            helper(root->right);
        }
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* res=curr;
        helper(root);
        return res->right;
    }
};