// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{   
    #define ll long long int
    int mod=1e9+7;
    
  public:
    int kvowelwords(int n, int k) {
        // Write Your Code here
        vector<vector<ll>> dp(n+1, vector<ll>(k+1));
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=k;j++){
                if(i==0)
                    dp[i][j]=1;
                else{
                    dp[i][j]=dp[i-1][k] * 21 %mod;
                    if(j>0)
                        dp[i][j]=(dp[i][j] + dp[i-1][j-1] * 5 %mod)%mod;
                }
            }
        }
        return dp[n][k];
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;int K;
        cin >>N>>K;
        
        Solution ob;
        int ans = ob.kvowelwords(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends