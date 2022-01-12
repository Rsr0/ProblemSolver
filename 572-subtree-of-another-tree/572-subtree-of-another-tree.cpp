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
    bool isSame(TreeNode* r, TreeNode* s){
        if(!r && !s)    return 1;
        if(r && s){
            if(r->val==s->val && isSame(r->left, s->left) && isSame(r->right, s->right))
                return 1;
        }
         return 0;   
    }
    
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot)    return 1;
        if(!root) return 0;
        if(isSame(root, subRoot))
            return 1;
        
        return isSubtree(root->left, subRoot) + isSubtree(root->right, subRoot);
    }
};