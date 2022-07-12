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
    
   int dfs(TreeNode* root){
       if(!root) return 0;
       
     int left=dfs(root->left);   // left height
     int right=dfs(root->right);  // right height
       
       ans=max(ans, left+right);  //max diameter
       return 1 + max(left,right);  
   }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) return 0;
        dfs(root);
        return ans;
    }
};