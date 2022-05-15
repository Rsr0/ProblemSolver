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
    int sum=0;
    int maxDepth(TreeNode* root){
        if (root==NULL)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }   
    
    void findsum(TreeNode* root, int curr, int max){ 
        if(root!=NULL){
            if(curr==max)
                sum=sum+root->val;
            else
                findsum(root->left,curr+1,max);

        findsum(root->right,curr+1,max);
        }
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int h=maxDepth(root);
        findsum(root,1,h);
        return sum;
    }
};