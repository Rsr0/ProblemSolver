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
    unordered_set<int> st;
    bool findTarget(TreeNode* root, int k) {
        if(!root) return 0;
        
        if(st.find(k-root->val)!=st.end())
            return 1;
        st.insert(root->val);
        int ls=findTarget(root->left,k);
        int rs=findTarget(root->right,k);
        return ls || rs;
      
    }
};