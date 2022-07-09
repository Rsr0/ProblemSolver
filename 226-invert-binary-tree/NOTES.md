​
```
TreeNode* node = new TreeNode(root->val);
if(root->left)
node->right = invertTree(root->left);
if(root->right)
node->left = invertTree(root->right);
return node;
```
​
```
root->left
root->right
swap(left, right)
```
​