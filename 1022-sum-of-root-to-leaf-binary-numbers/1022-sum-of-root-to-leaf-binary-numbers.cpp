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
    int ans=0;
    int sumRootToLeaf(TreeNode* root, int bits=0) {
        
        if(!root)
            return 0;
        
        bits=bits<<1; // *2
        if(root->val)
            bits++;
        
        sumRootToLeaf(root->left, bits);
        sumRootToLeaf(root->right, bits);
        
        if(!root->left && !root->right)
            ans+=bits;
        
        return ans;
        
    }
};