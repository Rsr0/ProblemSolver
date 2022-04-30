class Solution {
public:
    
    double dfs(string a, string b,  unordered_map<string,unordered_map<string,double>> &graph,  unordered_set<string> &vis){
        if(graph[a].find(b)!=graph[a].end())
            return graph[a][b];
        for(auto it:graph[a]){
            if(vis.find(it.first)==vis.end()){
                vis.insert(it.first);
                double res=dfs(it.first, b, graph, vis);
                if(res){
                    graph[a][b]=res*it.second;
                    return graph[a][b];
                }
            }
        }
        return 0;
    }
        
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& val, vector<vector<string>>& q) {
       vector<double>ans;
       unordered_map<string,unordered_map<string,double>>graph;
        for(int i=0;i<eq.size();i++){
            graph[eq[i][0]][eq[i][1]]=val[i];
            graph[eq[i][1]][eq[i][0]]=(double) 1/val[i];
        }
        
        for(int i=0;i<q.size();i++){
            unordered_set<string>vis;
            double res=dfs(q[i][0], q[i][1], graph, vis);
            if(res)
                ans.push_back(res);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};