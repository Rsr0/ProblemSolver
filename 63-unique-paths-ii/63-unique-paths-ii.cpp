class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1 || obstacleGrid[m-1][n-1]==1)
            return 0;
        
        vector<vector<int>> dp(2, vector<int>(n,0));
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) continue;
                dp[i%2][j]=0;
                if(obstacleGrid[i][j]==1) 
                    continue;
                
                if(i) 
                    dp[i%2][j]+=dp[(i-1)%2][j];
                if(j) 
                    dp[i%2][j]+=dp[i%2][j-1];
            }
        }
        return dp[(m-1)%2][n-1];
    }
};