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
    
    void traverse(TreeNode*root, vector<int>& v){
        if(!root) return;
        
        v.push_back(root->val);
        traverse(root->left,v);
        traverse(root->right,v);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        traverse(root1, v1);
        traverse(root2, v2);
        
        for(auto it:v2)
            v1.push_back(it);
        
        sort(v1.begin(), v1.end());
        return v1;
    }
};