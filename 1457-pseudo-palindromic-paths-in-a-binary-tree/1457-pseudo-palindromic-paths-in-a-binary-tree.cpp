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
    int ans=0;
    void preorder(TreeNode* root, int cnt){
        if(!root) return;
        
        cnt^=(1<<root->val);   // 2 ^ root->val
        //if i-bit is set in `cnt`, that means digit `i` has an odd frequency
        //the number of 1 in `cnt` = the number of digits with an odd frequency
        
        if(!root->left && !root->right){ 
         
            ans+=(cnt & (cnt-1))==0; //at most one digit that has an odd frequncy
        }

        preorder(root->left, cnt);
        preorder(root->right, cnt);

    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        preorder(root, 0);
        return ans;
    }
};