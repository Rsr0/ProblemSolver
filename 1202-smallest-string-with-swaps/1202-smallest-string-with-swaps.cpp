class Solution {
public:
    
    void dfs(vector<vector<int>>& graph, vector<bool>& vis, vector<int>& index, string& s, string& t, int i){
        vis[i]=1;
        t+=s[i];
        index.push_back(i);
        for(int j=0;j<graph[i].size();j++){
            if(!vis[graph[i][j]])
                    dfs(graph, vis, index, s, t, graph[i][j]);
        }
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        vector<vector<int>> graph(s.size());
        for(int i=0;i<pairs.size();i++){
            graph[pairs[i][0]].push_back(pairs[i][1]);
            graph[pairs[i][1]].push_back(pairs[i][0]);
        }
        
        vector<bool> vis(graph.size(),0);
        for(int i=0;i<graph.size();i++){
            if(!vis[i]){
                vector<int> index;
                string t="";
                dfs(graph, vis, index, s, t, i);
                sort(index.begin(), index.end());
                sort(t.begin(), t.end());
                for(int k=0;k<t.size();k++)
                    s[index[k]]=t[k];   // sorted connected pairs
            }
        }
        return s;
    }
};