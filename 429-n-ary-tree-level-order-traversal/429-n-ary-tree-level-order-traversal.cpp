/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> ans;    
        
     if(!root) return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            int n=q.size();
            while(n--){
                auto temp=q.front();
                q.pop();
                v.push_back(temp->val);
                for(auto i:temp->children) // children of curr node
                    q.push(i);                
               }
            ans.push_back(v);
        }
        return ans;
    }
};