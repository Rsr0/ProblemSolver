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
    int widthOfBinaryTree(TreeNode* root) {
          if(!root)   return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});   
        int ans=0;
        
        while(!q.empty()){
            int minIndex=INT_MAX, maxIndex=INT_MIN;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front().first;
                int x=q.front().second;
                q.pop();
                minIndex=min(minIndex,x);
                maxIndex=max(maxIndex,x);
                if(t->left)
                    q.push({t->left,(long long)2*x+1});
                
                if(t->right)
                      q.push({t->right,(long long)2*x+2});
            
               }
            ans=max(ans,maxIndex-minIndex+1);
          }
        return ans;
    }
};