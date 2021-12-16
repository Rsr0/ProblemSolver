class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1)
            return {0};
        
        vector<int> deg(n), adj[n];
        for(auto &it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            deg[it[0]]++;
            deg[it[1]]++;
        }
        
        queue<int> q; //push nodes with indegree 1 into queue
        vector<int> ans;
        for(int i=0;i<n;i++){ 
            if(deg[i]==1){ // start with leaves
                deg[i]--;
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int sz=q.size();
            ans.clear(); //if queue is not empty, clearly there are nodes with lesser height, so clear the answer
            
            while(sz--){ //for all adjacent nodes, decrease indegree
                int v=q.front();
                q.pop();
                
                ans.push_back(v);
                for(auto &u:adj[v]){
                    if(--deg[u]==1) //current node becomes a leaf 
                        q.push(u);
                }
            }
        }
        return ans;
    }
};