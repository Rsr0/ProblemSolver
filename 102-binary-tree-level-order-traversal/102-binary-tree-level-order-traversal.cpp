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
  vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans; //{}
        
	    queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
         vector<int> v;
        TreeNode* temp;
        while(!q.empty()){
            temp=q.front();
            q.pop();
            if(!temp){
                ans.push_back(v);
                v.clear();
                if(!q.empty())
                    q.push(NULL);
            }
          
            else{
                v.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
};