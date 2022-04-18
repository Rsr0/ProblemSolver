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
    vector<int> v;
    
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        TreeNode* curr = new TreeNode(v[0]);
        TreeNode* res=curr;
        
        for(int i=1;i<v.size();i++){
            TreeNode* temp=new TreeNode(v[i]);
            curr->right=temp;
            curr=curr->right;
        }
        return res;
    }
};