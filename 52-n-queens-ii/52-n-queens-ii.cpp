class Solution {
public:
    
        void solve(vector<string> &board, int row, vector<vector<string>> &ans, vector<int> &uppercol,  vector<int> &leftDiagonal,  vector<int> &rightDiagonal, int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int col=0;col<n;col++){
        if(uppercol[col]==0 && leftDiagonal[n-1 + row - col]==0 && rightDiagonal[row+col]==0){
            board[row][col]='Q';
            uppercol[col]=1;
            leftDiagonal[n-1 + row - col]=1;
            rightDiagonal[row+col]=1;
            solve(board,row+1,ans,uppercol,leftDiagonal,rightDiagonal,n);
            board[row][col]='.';
             uppercol[col]=0;
            leftDiagonal[n-1 + row - col]=0;
            rightDiagonal[row+col]=0;
            
        }
            }
    }
    
    int totalNQueens(int n) {
             vector<vector<string>> ans;
        if(n==2 || n==3)
            return 0;
        
        string s(n,'.');
        vector<string> board(n,s);
        vector<int> uppercol(n, 0), leftDiagonal(2 * n - 1, 0), rightDiagonal(2 * n - 1, 0);

        solve(board,0,ans,uppercol,leftDiagonal,rightDiagonal,n);
        return ans.size();
    }
};