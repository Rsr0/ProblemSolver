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
    
    int idx=0;
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return build(preorder,INT_MAX);
    }
    
    TreeNode* build(vector<int>& pre, int upper){
        if(idx==pre.size() || pre[idx]>upper)
            return NULL;
        
        TreeNode* root=new TreeNode(pre[idx++]);
        root->left=build(pre,root->val);  // value less than root
        root->right=build(pre,upper);     // remaining value less than upper bound
        return root;
    }
};