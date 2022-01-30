// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

    // 1 1 1 1 1        1  2  3  4  5  
    // 2 2 2 2 2        3  6  9  12 15
    // 3 8 6 7 3  --->  6  17 26 36 42
    // 4 4 4 4 4        10 25 38 52 62
    // 5 5 5 5 5        15 35 53 72 87

    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int k){
        // Your code goes here
        vector<vector<int>> dp(N+1, vector<int>(N+1,0));
            
        for(int i=1;i<=N;i++){
            for(int j=1;j<=N;j++){
                dp[i][j]=mat[i-1][j-1] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            }
        }
        
        int res=0;
        for(int i=k;i<=N;i++){
            for(int j=k;j<=N;j++){
                int sum= dp[i][j] - dp[i-k][j] - dp[i][j-k] + dp[i-k][j-k];
                res=max(res, sum);
            }
        }
        return res;
    }  
};

// { Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}
  // } Driver Code Ends