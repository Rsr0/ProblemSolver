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
    
    void preOrder(TreeNode* root, string& res){
        if(!root)   return;
        
        res+=to_string(root->val);
        if(root->left || root->right){
        res+="("; 
        preOrder(root->left, res);
        res+=")";
        }
        
        if(root->right){
        res+="(";
        preOrder(root->right, res);
        res+=")";
        }
        
    }
    string tree2str(TreeNode* root) {
        string res="";
        preOrder(root, res);
        return res;
    }
};