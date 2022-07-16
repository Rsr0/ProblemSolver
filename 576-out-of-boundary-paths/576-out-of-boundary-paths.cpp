class Solution {
    int mod=1e9+7;
public:
    
    int solve(int m, int n, int N, int R, int C, vector<vector<vector<int>>>&dp) {
        if(R<0 || R>=m || C<0 || C>=n)  return 1;
        if(N==0) return 0;
        if(dp[R][C][N]!=-1) return dp[R][C][N];
        dp[R][C][N]= ((solve(m,n,N-1,R+1,C,dp) + solve(m,n,N-1,R-1,C,dp)) %mod
                    + (solve(m,n,N-1,R,C+1,dp) + solve(m,n,N-1,R,C-1,dp)) %mod)%mod;
        return dp[R][C][N];
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
         vector<vector<vector<int>>> dp(m,vector<vector<int>>(n,vector<int>(maxMove+1,-1)));
         return solve(m,n,maxMove,startRow, startColumn, dp);
    }
};