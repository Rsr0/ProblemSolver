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
    TreeNode* px=NULL, *py=NULL;
    int dx=-1,dy=-1;
    void dfs(TreeNode* root, TreeNode* parent, int x, int y, int depth){
        if(!root) return;
        if(x==root->val){
            px=parent;
            dx=depth;
        }
        else if(y==root->val){
            py=parent;
            dy=depth;
        }
        
        dfs(root->left, root, x, y, depth+1);
        dfs(root->right, root, x, y, depth+1);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root,NULL,x,y,0);
        return (dx==dy && px!=py);
    }
};