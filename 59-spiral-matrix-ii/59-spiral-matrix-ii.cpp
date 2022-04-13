class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n,0));
        int sr=0, sc=0, er=n-1, ec=n-1, x=1;
     
        while(x<=n*n){
            // left -> right
            for(int i=sc;i<=ec;i++)
                mat[sr][i]=x++;
            sr++;
            // up -> down
            for(int i=sr;i<=er;i++)
                mat[i][ec]=x++;
            ec--;
            //right -> left
            for(int i=ec;i>=sc;i--)
                mat[er][i]=x++;
            er--;
            // down -> up
            for(int i=er;i>=sr;i--)
                mat[i][sc]=x++;
            sc++;
        }
        return mat;
    }
};