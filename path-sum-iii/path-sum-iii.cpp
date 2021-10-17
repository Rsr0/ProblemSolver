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
    
    int pathRoot(TreeNode* root, int sum){
        if(!root) return 0;
        int res=0;
        if(root->val==sum) res++;
        res+=pathRoot(root->left, sum-root->val);
        res+=pathRoot(root->right, sum-root->val);
        return res;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return 0;
        return pathSum(root->left, targetSum) + pathRoot(root, targetSum) + pathSum(root->right, targetSum);
    }
};