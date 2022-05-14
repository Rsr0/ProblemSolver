// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

int dfs(vector<vector<int>>& mat , int i , int j , int n , int m , vector<vector<int>> &dp){
    if(j < 0 || j >= m || i == n || mat[i][j] == -1) 
        return 0;
    if(dp[i][j]!=-1)    
        return dp[i][j];
    
    int ld=dfs(mat , i + 1 , j - 1 , n , m , dp);
    int d=dfs(mat , i + 1 , j  , n , m , dp);
    int rd=dfs(mat , i + 1 , j + 1 , n , m , dp);
    
    return dp[i][j]=mat[i][j] + max({ld,d,rd});
}   

int MaxGold(vector<vector<int>>&matrix){
    // Code here
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> dp(n, vector<int>(m,-1));
    int ans=0;
    for(int i=0;i<m;i++)
        ans=max(ans, dfs(matrix, 0, i, n, m, dp));
    
    return ans;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int m, n;
		cin >> m >> n;
		vector<vector<int>>matrix(m, vector<int>(n, 0));
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		}
		Solution obj;
		int ans = obj.MaxGold(matrix);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends