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
    int solve(TreeNode* root, int &ans, int i){
        if(!root) return 1;
        int l=solve(root->left, ans, 1);
        int r=solve(root->right, ans, 1);
        
        if(l==0 || r==0){
            ans++;
            return 2;
        }
        if(l==2 || r==2)
            return 1;
        else if(i==0)
            ans++;
        return 0;
    }
    
    int minCameraCover(TreeNode* root) {
        int ans=0;
        solve(root,ans,0);
        return ans;
    }
};