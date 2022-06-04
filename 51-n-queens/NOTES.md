bool issafe(int row,int col, vector<string> &board, int n){
for(int i=0;i<row;i++){     //same col
if(board[i][col]=='Q') return false;
}
for(int i=row, j=col;i>=0 && j>=0;i--,j--){ //left upper diagonal
if(board[i][j]=='Q') return false;
}
for(int i=row,j=col;i>=0 && j<n;i--,j++){ //right upperdiagonal
if(board[i][j]=='Q') return false;
}
return true;
}
void solve(vector<string> &board, int row, vector<vector<string>> &ans, int n){
if(row==n){
ans.push_back(board);
return;
}
for(int col=0;col<n;col++){
if(issafe(row,col,board,n)){
board[row][col]='Q';
solve(board,row+1,ans,n);
board[row][col]='.';
}
}