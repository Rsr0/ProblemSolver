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
    
    void dfs(TreeNode* root, vector<string>& ans, string path){
        if(!root) return;
        
        if(!root->left && !root->right){
            path+=to_string(root->val);
            ans.push_back(path);
            return;
        }
        path+=to_string(root->val)+"->";
        
        dfs(root->left,ans,path);
        dfs(root->right,ans,path);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(!root) return ans;
        string path="";
  
        dfs(root, ans, path);
        
        return ans;
        
    }
};