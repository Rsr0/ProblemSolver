class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int rows = triangle.size();
        vector<vector<int>> dp(rows, vector(rows, -1));
        
        for(int i = 0; i < rows; i++)
            dp[rows-1][i] = triangle[rows-1][i]; 
        
        
        for(int i = rows-2; i >= 0; i--)
            for(int j = 0; j <= i; j++)
                dp[i][j] = min(dp[i+1][j], dp[i+1][j+1]) + triangle[i][j];
              
        return dp[0][0];
    }
};