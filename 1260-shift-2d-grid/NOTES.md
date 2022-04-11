* convert grid to 1D vector
* rotate the vector k times
​
or
​
```
int m=grid.size(), n=grid[0].size();
vector<vector<int>> ans(m,vector<int>(n,0));
for(int i=0;i<n*m;i++){
int row=i/n, col=i%n;
int new_row=(row + (col+k)/n)%m;
int new_col=(col + k)%n;
ans[new_row][new_col]=grid[row][col];
}
return ans;
```