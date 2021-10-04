class Solution {
public:
    
//     int isWater(vector<vector<int>>& grid, int i, int j, int row, int col){
//         return !(0<=i && i<row && 0<=j && j<col && grid[i][j] == 1);
//     }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0;
        int row=grid.size(), col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    ans+=4;
                     if(j-1>=0 && grid[i][j-1]==1)
                        ans -= 2;
                    if(i-1>=0 && grid[i-1][j]==1)
                        ans -= 2;
                    
                  // ans = ans //+ isWater(grid, i, j, row, col)
                  //           + isWater(grid, i+1, j, row, col)
                  //           + isWater(grid, i-1, j, row, col)
                  //           + isWater(grid, i, j+1, row, col)
                  //           + isWater(grid, i, j-1, row, col);

                }
            } 
       }
        return ans;
    }
};