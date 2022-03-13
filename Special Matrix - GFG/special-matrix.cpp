// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
int mod=1e9+7;

int ans=0;
int dp[501][501];

int check(vector<vector<int>>& mat, int i, int j){
    if(i<0 || j<0 || mat[i][j]==1)
        return 0;
       if(i==0 && j==0)
        return 1;

    if(dp[i][j]!=-1)
        return dp[i][j]%mod;
 
    
    dp[i][j]=check(mat,i-1,j)%mod + check(mat,i,j-1)%mod;
    
    return dp[i][j]%mod;
    
}

	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	    // Code here
	    memset(dp,-1,sizeof(dp));
        vector<vector<int>> mat(n,vector<int>(m,0));
        
        for(auto it:blocked_cells){
            mat[it[0]-1][it[1]-1]=1;
            // cout<<it[0]-1<< it[1]-1;
        
        }
        // cout<<mat[n-1][m-1];
        return check(mat, n-1, m-1);
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, k;
		cin >> n >> m >> k;
		vector<vector<int>>blocked_cells;
		for(int i = 0; i < k; i++){
			int x, y;
			cin >> x >> y;
			blocked_cells.push_back({x, y});
		}
		Solution obj;
		int ans = obj.FindWays(n, m, blocked_cells);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends