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
    
    TreeNode* build(vector<int>& in, int inStart, int inEnd, vector<int>& pos, int posStart, int posEnd, map<int,int>& inMap){
        if(inStart > inEnd || posStart > posEnd)
            return NULL;
        
        TreeNode* root=new TreeNode(pos[posEnd]);
        int inRoot=inMap[root->val];
        int numsLeft=inRoot-inStart;
        
        root->left=build(in, inStart, inRoot-1, pos, posStart,posStart+numsLeft-1, inMap);
        root->right=build(in, inRoot+1, inEnd, pos, posStart+numsLeft, posEnd-1, inMap);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size())
            return NULL;
        map<int,int> inMap;
        for(int i=0;i<inorder.size();i++)
            inMap[inorder[i]]=i;
        
        return build(inorder, 0, inorder.size()-1,
                     postorder, 0, postorder.size()-1, inMap);
    }
};