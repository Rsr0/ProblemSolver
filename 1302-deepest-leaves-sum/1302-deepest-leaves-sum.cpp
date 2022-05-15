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
    
    vector<vector<int>> level(TreeNode* root){
        vector<vector<int>> v;
        if(!root) return v; 
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> t;
            while(n--){
                TreeNode* node=q.front();
                q.pop();
                t.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            v.push_back(t);
        }
        return v;
    }
    
    int deepestLeavesSum(TreeNode* root) {
        vector<vector<int>> v = level(root);
        int n=v.size()-1, sum=0;
        
        for(auto it:v[n])
            sum+=it;
        return sum;
    }
};