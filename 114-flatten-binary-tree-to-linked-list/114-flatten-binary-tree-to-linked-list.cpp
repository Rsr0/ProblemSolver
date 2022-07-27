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
  
    void flatten(TreeNode* root) {
        if(!root) return;
        
       TreeNode* node=root;
        while(node){
            if(node->left){
                // Attach the rightmost leaf element of the left subtree to the right subtree 
                TreeNode* rtail=node->left;
                while(rtail->right)
                    rtail=rtail->right;  // right tail
                
                rtail->right=node->right;  // connecting right tail with right subtree
                 
             // connect the left sub-tree to the right sub-tree & makes the left subtree NULL
                node->right=node->left;
                node->left=NULL;
            }
            
            node=node->right;  // Flatten the rest of the right tree:
        }
        
    }
};