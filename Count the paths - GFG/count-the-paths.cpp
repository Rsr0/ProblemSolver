// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
int cnt=0;

void dfs(vector<vector<int>> &adj, int s, int d, int n){
    if(s==d){ 
        cnt++; 
        return;
        
    }
    // if(s>=n) return;
    for(int i=0;i<adj[s].size();i++){
        dfs(adj, adj[s][i], d, n);
    }
    
}

	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<vector<int>> adj(n);
	    for(int i=0;i<edges.size();i++){
	        adj[edges[i][0]].push_back(edges[i][1]);
	    }
	    dfs(adj, s, d, n);
	    return cnt;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends