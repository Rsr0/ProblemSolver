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
    
//     bool validate(TreeNode* root, TreeNode* low, TreeNode* high){
//     if(root==NULL ) return 1;    
    
   
//     if((low!=NULL && root->val >= low->val) || (high!=NULL && root->val <= high->val))
//         return 0;
    
//     return validate(root->left, root, high) &&   validate(root->right, low, root);
     
//     }
    
    TreeNode* prev=NULL;
    bool inorder(TreeNode* root){
        if(root==NULL) return 1;
        
        if(!inorder(root->left))
            return 0;
        
        if(prev!=NULL && root->val <= prev->val)
            return 0;
        
        prev=root;
        return inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        // return validate(root,NULL,NULL);
        return inorder(root);
    }
};