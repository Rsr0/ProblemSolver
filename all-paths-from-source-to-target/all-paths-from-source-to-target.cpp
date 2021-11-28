class Solution {
public:
    
    void dfs(vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>& path, int n){
        path.push_back(n);
        
        if(n==graph.size()-1)
            ans.push_back(path);
        
        else{
            for(auto i: graph[n])
                dfs(graph,ans, path, i);
        }
        
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(graph, ans, path, 0);
        return ans;
    }
};