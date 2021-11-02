class Solution {
public:
    
    int res=0, empty=1;
    void dfs(vector<vector<int>>& grid, int i, int j, int count){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==-1)
            return;
        if(grid[i][j]==2){
            if(empty==count)
                res++;
            return;
        }
        grid[i][j]=-1;
        
        dfs(grid, i+1, j, count+1);
        dfs(grid, i, j+1, count+1);
        dfs(grid, i-1, j, count+1);
        dfs(grid, i, j-1, count+1);
        
        grid[i][j]=0;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int start_x, start_y;
        for (int i = 0; i < grid.size(); i++) {
             for (int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j]==0)   
                    empty++;
                 else if(grid[i][j]==1)
                     start_x=i, start_y=j;
             }
        }
        dfs(grid, start_x, start_y, 0);
        return res;
    }
};
    