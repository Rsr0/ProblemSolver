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
    int dfs(TreeNode* root, int minV, int maxV){
        if(!root)
            return 0;
        
        int curr_max=max(abs(root->val-minV), abs(root->val-maxV));
        minV=min(minV, root->val);
        maxV=max(maxV, root->val);
        
        return max({curr_max, dfs(root->left, minV, maxV), dfs(root->right, minV, maxV)});
    }
    
    int maxAncestorDiff(TreeNode* root) {
        
        return dfs(root, root->val, root->val);
    }
};