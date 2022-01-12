### Recursive
```
TreeNode* insertIntoBST(TreeNode* root, int val) {
if(!root){
TreeNode *node=new TreeNode(val);
return node;
}
if(val < root->val)
root->left=insertIntoBST(root->left, val);
else
root->right=insertIntoBST(root->right, val);
return root;
}
```
​