class Solution {
public:
    int dp[70][70][70]={};
    int rows, cols;
    
    int dfs(vector<vector<int>> &grid, int r, int c1, int c2){
        if(r==rows)
            return 0;
        if(dp[r][c1][c2]>0) 
            return dp[r][c1][c2];
        
        int ans=0;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int nc1=c1+i, nc2=c2+j;
                if(nc1>=0 && nc1<nc2 && nc2<cols) //eliminate branches where c1 >= c2.
                    ans=max(ans, dfs(grid, r+1, nc1, nc2));
            }
        }
        return dp[r][c1][c2]=grid[r][c1] + grid[r][c2] + ans;
    }
    
    int cherryPickup(vector<vector<int>>& grid) {
        rows=grid.size(), cols=grid[0].size();
        return dfs(grid, 0, 0, cols-1);
    }
    
    
};