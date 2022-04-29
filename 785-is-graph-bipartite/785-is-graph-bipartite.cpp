class Solution {
public:
    bool bfs(int src, vector<vector<int>>& graph, vector<int>& color){
       queue<int> q;
        q.push(src);
        color[src]=1;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            for(auto it:graph[curr]){
                if(color[it]==-1){
                    color[it]=1-color[curr]; //toggle the color
                    q.push(it);
                }
                else if(color[it]==color[curr])
                    return 0;
            }
        }
        return 1;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
          int n = graph.size();
        vector<int> color(n, -1);
        for (int i = 0; i < n; i++){
            if (color[i] == -1)
                if (!bfs(i, graph, color))
                    return 0;
        }
        return 1;
    }
};