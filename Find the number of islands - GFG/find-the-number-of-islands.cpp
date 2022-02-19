// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    
  int d[8][2]={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};

  void dfs(vector<vector<char>>& grid, vector<vector<bool>>& vis, int r, int c){
      if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size() || vis[r][c]==1 || grid[r][c]=='0')
            return ;
        
      vis[r][c]=1;
      
      for(int i=0;i<8;i++){
          int x=r+d[i][0];
          int y=c+d[i][1];
          dfs(grid, vis, x, y);
      }
      
        
  }
  
  
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size(), m=grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]==0 && grid[i][j]=='1'){
                    dfs(grid, vis, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends