class Solution {
public:
    bool dfs(vector<int> adj[],vector<bool> &vis, vector<bool> &curr, int node){
        vis[node]=curr[node]=1;
        for(auto i:adj[node]){
            if(!vis[i] && dfs(adj,vis,curr,i))
                return 1;
            else if(curr[i])
                return 1;
        }
        curr[node]=0;
        return 0;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> adj[numCourses];
        vector<bool> vis(numCourses,0);
        vector<bool> curr(numCourses,0);
        
        for(auto i: prerequisites)
            adj[i[0]].push_back(i[1]);
        
        for(int i=0;i<numCourses;i++){
            if(!vis[i] && dfs(adj, vis, curr, i))
                return 0;
        }
        return 1;
    }
};