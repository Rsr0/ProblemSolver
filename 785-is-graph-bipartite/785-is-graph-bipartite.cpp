class Solution {
public:
    bool dfs(int src, vector<vector<int>>& graph, vector<int>& color){
            for(auto it:graph[src]){
                if(color[it]==-1){
                    color[it]=1-color[src]; //toggle the color
                    if(!dfs(it, graph, color))
                        return 0;
                }
                else if(color[it]==color[src])
                    return 0;
            }
        return 1;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
          int n = graph.size();
        vector<int> color(n, -1);
        for (int i = 0; i < n; i++){
            if (color[i] == -1)
                if (!dfs(i, graph, color))
                    return 0;
        }
        return 1;
    }
};