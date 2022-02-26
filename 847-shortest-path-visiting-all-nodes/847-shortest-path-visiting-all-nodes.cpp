class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<bool>> vis(n, vector<bool>(1<<n, 0));
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            q.push({i,1<<i});
            vis[i][1<<i]=1;
        }
        
        int steps=0;
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto [node,state]=q.front();
                q.pop();
                for(auto it: graph[node]){ // neighbours
                    int next_state= state | (1<<it);
                    if(next_state==(1<<n)-1)  // visited
                        return steps+1;
                    
                    if(!vis[it][next_state]){
                        q.push({it, next_state});
                        vis[it][next_state]=1;
                    }
                    
                }
            }
            steps++;
        }
        return 0;
    }
};