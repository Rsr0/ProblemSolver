class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1, vector<int>(n+1));
        for(auto s:strs){
            int ones = count(s.begin(), s.end(), '1');
            int zeros = s.length() - ones;
            for(int i = m; i >= zeros; i--)
			    for(int j = n; j >= ones; j--)     
                    dp[i][j] = max(dp[i][j], // leave it
							   dp[i - zeros][j - ones] + 1); // take it 
        }
        return dp[m][n];
    }
};