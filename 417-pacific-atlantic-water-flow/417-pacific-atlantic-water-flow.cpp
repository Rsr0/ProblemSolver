class Solution {
public:
    void dfs(vector<vector<int>>& mat, vector<vector<int>>& vis, int i, int j){
        int m=mat.size(), n=mat[0].size();
        vis[i][j]=1;
        
        if(i-1>=0 && !vis[i-1][j] && mat[i-1][j]>=mat[i][j])
            dfs(mat,vis,i-1,j);
       
        if(i+1<m && !vis[i+1][j] && mat[i+1][j]>=mat[i][j])
            dfs(mat,vis,i+1,j);
         if(j-1>=0 && !vis[i][j-1] && mat[i][j-1]>=mat[i][j])
            dfs(mat,vis,i,j-1);
        if(j+1<n && !vis[i][j+1] && mat[i][j+1]>=mat[i][j])
            dfs(mat,vis,i,j+1);
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans;
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> pacific(m, vector<int>(n));
        vector<vector<int>> atlantic(m, vector<int>(n));
       
        for(int i=0;i<m;i++){
            dfs(heights, pacific, i, 0); //leftmost
            dfs(heights, atlantic, i, n-1); //rightmost
        }
        for(int i=0;i<n;i++){
            dfs(heights, pacific, 0, i); //topmost
            dfs(heights, atlantic, m-1, i); //bottommost
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pacific[i][j] && atlantic[i][j])
                    ans.push_back(vector<int>{i,j});
            }
        }
        return ans;
    }
};