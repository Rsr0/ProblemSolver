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
   unordered_map<int,int> inMap;
    int preIdx=0;
     TreeNode* dfs(vector<int>& pre, int left, int right){
        if(left > right)     return NULL;
         TreeNode* root=new TreeNode(pre[preIdx++]);
         int mid=inMap[root->val];
         root->left=dfs(pre, left, mid-1);
         root->right=dfs(pre, mid+1, right);
         return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        for(int i=0;i<n;i++)
            inMap[inorder[i]]=i;
        return dfs(preorder, 0, n-1);
    }
};