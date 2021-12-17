class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row=matrix.size(), col=matrix[0].size();
        int ans=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                matrix[i][j]-='0';
                if(i==0 || j==0){
                    ans=max(ans, (int)matrix[i][j]);
                    continue;
                }
                
                if(matrix[i][j]){
                    matrix[i][j]=min({matrix[i][j-1], matrix[i-1][j], matrix[i-1][j-1]}) + 1;
                }
                ans=max(ans, (int)matrix[i][j]);
            }
        }
        return ans*ans;
    }
};