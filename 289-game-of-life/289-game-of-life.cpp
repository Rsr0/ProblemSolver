class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size(), n=board[0].size();
        vector<vector<int>> ans(board);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int cnt1=0;
                if(i-1>=0 && ans[i-1][j]) cnt1++;
                if(j-1>=0 && ans[i][j-1]) cnt1++;
                if(i-1>=0 && j-1>=0 && ans[i-1][j-1]) cnt1++;
                if(i-1>=0 && j+1<n && ans[i-1][j+1]) cnt1++;
                if(j+1<n &&  ans[i][j+1]) cnt1++;
                if(i+1<m && j+1<n && ans[i+1][j+1]) cnt1++;
                if(i+1<m && ans[i+1][j]) cnt1++;
                if(i+1<m && j-1>=0 && ans[i+1][j-1]) cnt1++;
                   
                if(ans[i][j]){
                    if(cnt1<2 || cnt1>3)
                        board[i][j]=0;
                    else
                        board[i][j]=1;
                }
                else{
                    if(cnt1==3)
                        board[i][j]=1;
                    else 
                        board[i][j]=ans[i][j];
                }

            }
        }
      
    }
};