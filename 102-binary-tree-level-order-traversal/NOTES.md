####  Queue
​
queue<TreeNode*> q;
q.push(root);
TreeNode* temp;
while(!q.empty()){
int n=q.size();
vector<int> v;
for(int i=0;i<n;i++){
temp=q.front();
q.pop();
v.push_back(temp->val);
if(temp->left) q.push(temp->left);
if(temp->right) q.push(temp->right);
}
ans.push_back(v);
}
#### map[height]
map<int, vector<int>> mp;
void solve(TreeNode* root, int h){
if(!root) return;
mp[h].push_back(root->val);
solve(root->left, h+1);
solve(root->right, h+1);
}
vector<vector<int>> levelOrder(TreeNode* root) {
vector<vector<int>> ans;
if(!root) return ans; //{}
solve(root,0);
for(auto it:mp){
ans.push_back(it.second);
}
return ans;
}