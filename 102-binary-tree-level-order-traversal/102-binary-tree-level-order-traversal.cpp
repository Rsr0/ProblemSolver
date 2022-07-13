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
    map<int, vector<int>> mp;
    
    void solve(TreeNode* root, int h){
    if(!root) return;
        
    mp[h].push_back(root->val);
    
    solve(root->left, h+1);
    solve(root->right, h+1);
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans; //{}
        
        solve(root,0);
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};