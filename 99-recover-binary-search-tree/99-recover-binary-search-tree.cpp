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
    
    vector<pair<TreeNode*,TreeNode*>> v;
    TreeNode* prev = NULL;
    
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            if(prev && prev->val > root->val)
                v.push_back({prev, root});
            prev=root;
            inorder(root->right);
        }
    }
    
    void recoverTree(TreeNode* root) {
        inorder(root);
        if(v.size()==1)
            swap(v[0].first->val, v[0].second->val);
        if(v.size()==2)
            swap(v[0].first->val, v[1].second->val);
        
    }
};