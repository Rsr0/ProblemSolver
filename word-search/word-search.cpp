class Solution {
public:
    
    bool solve(vector<vector<char>>& board, int i, int j, string word, int idx){
        if(idx==word.size())
            return 1;
        
        if(i < 0 || j < 0 || i > board.size()-1 || j > board[0].size()-1) return 0; // boundary of matrix
        if(board[i][j] != word[idx]) return 0; // do not match
        
        board[i][j] = '*'; // change the content, to avoid duplicated search
        bool check =  solve(board, i+1, j,word, idx+1) || // up
                              solve(board, i-1, j, word, idx+1) || // down
                              solve(board, i, j-1, word, idx+1) || // left
                              solve(board, i, j+1, word, idx+1);   // right
        
        board[i][j] = word[idx]; // modify it back!
        return check;    
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(), m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                    if(solve(board, i, j, word, 0))
                        return 1;
                
            }
        }
        return 0;
    }
};