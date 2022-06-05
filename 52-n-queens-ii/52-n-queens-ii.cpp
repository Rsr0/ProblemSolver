class Solution {
public:
    int cnt;
    
    bool isSafe(int mat[][10], int r, int c, int n){
        for(int i=0;i<r;i++)                      // same col
            if(mat[i][c])  return 0;
        
        for(int i=r,j=c; i>=0 && j>=0; i--,j--)   // same '\' diag
            if(mat[i][j])   return 0;
        
        for(int i=r,j=c; i>=0 && j<n; i--,j++)    // same '/' diag
            if(mat[i][j])   return 0;
        
        return 1;
    }
    
    void solve(int mat[][10], int r, int n){
        if(r==n){
            cnt++; return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(mat, r, i, n)){
                mat[r][i]=1;  // place Q
                solve(mat,r+1,n);
                mat[r][i]=0;  // remove Q
            }
        }
    }
    
    int totalNQueens(int n) {
        cnt=0;
        int mat[10][10]={0};
        solve(mat,0,n);
        return cnt;
    }
};