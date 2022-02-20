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
    int cam=0;
    int solve(TreeNode* root){
        if(!root) return 1;
        int l=solve(root->left);
        int r=solve(root->right);
        
        if(l==0 || r==0){ // add a camera
            cam++;       
            return 2;
        }
        else if(l==2 || r==2) //  covered with camera
            return 1;
        else
        return 0;  // not covered
    }
    
    int minCameraCover(TreeNode* root) {
   
        return solve(root)==0 ? cam+1 : cam ;
    }
};