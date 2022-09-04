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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    map<int, vector<int> > mp;  
	queue<pair<int, TreeNode*> > q; 
	q.push(make_pair(0, root));  // q.push({0,root})
       
    while(!q.empty()) {
	   multiset<pair<int, int> > temp;  // x-axis, val   multiset if 2 nodes have same value
		int n=q.size();
		
          for(int i=0;i<n;++i) {
              auto p=q.front();
              q.pop();
              temp.insert(make_pair(p.first, p.second->val));
              if(p.second->left)
                  q.push(make_pair(p.first-1, p.second->left));
              if(p.second->right)
                  q.push(make_pair(p.first+1, p.second->right));
             
	}
        for(auto it: temp)
            mp[it.first].push_back(it.second);
    }

	vector<vector<int> > res;
	for(auto it : mp)
        res.push_back(it.second);
	return res;

    }
};



/*
Input:     [3,1,4,0,2,2]
Output:    [[0],[1],[3,2],[4]]
Expected:  [[0],[1],[3,2,2],[4]]
*/